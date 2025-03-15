#include "LinkedCollection.h"
#include <iostream>

// Default constructor
LinkedCollection::LinkedCollection() : head(nullptr), tail(nullptr) {}

// Copy constructor
LinkedCollection::LinkedCollection(const LinkedCollection& other) : head(nullptr), tail(nullptr) {
    // copy elements from other collection to head

    Node* current = other.head;
    // current->PointerForPreviosNode = nullptr; Set previous pointer of the first node to nullptr
    while (current != nullptr) {
        // use addElement method
        addElement(current->dataOfElement);
        // Set previous pointer of the current node to the next node
        current = current->PointerForNextNode;
    }
}

// Defualt Destructor
LinkedCollection::~LinkedCollection() {
    // delete all nodes in the list
    Node* current = head;
    // use while loop 
    while (current != nullptr) {
        // node to delete use pointer to next 
        Node* next = current->PointerForNextNode; 
        // delete the current node
        delete current;
        // set current to next node
        current = next;
    }
    // set head and tail to nullptr after deleting all nodes
    head = nullptr;
    tail = nullptr;
}

// Add element to the end of the list
void LinkedCollection::addElement(int value){
    // create new node to add in the list head and tail
    Node* newNode = new Node(value);
    // if list is empty, set new node as head and tail
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        // set next pointer of the new node to the head
        newNode->PointerForNextNode = head;
        // set previous pointer of the head to the new node
        head->PointerForPreviosNode = newNode;
        // set head to the new node
        head = newNode;
    }
}

// Removes the first occurrence of an element
// Removes the first occurrence of an element
bool LinkedCollection::removeElement(int value) {
    Node* current = head;

    while (current != nullptr) {
        if (current->dataOfElement == value) {
            // If node not in list, that head
            if (current->PointerForPreviosNode) {
                current->PointerForPreviosNode->PointerForNextNode = current->PointerForNextNode;
            } else {
                head = current->PointerForNextNode; // else if if it head is already
            }

            if (current->PointerForNextNode) {
                current->PointerForNextNode->PointerForPreviosNode = current->PointerForPreviosNode;
            } else {
                tail = current->PointerForPreviosNode; // if is last node then already tail 
            }

            delete current; // Remove current node
            return true; // return bool true if current != nullptr
        }
        current = current->PointerForNextNode; // to next node in list
    }
    return false; // if element not found then return false
}

// Finds the maximum element in the list
int LinkedCollection::findMax() const {
    // if list is empty, return -1
    if (head == nullptr) {
        std::cerr << "Error: List is empty!" << std::endl;
        return -1; // Return -1 if the list is empty
    }

    int maxFoundNow = head->dataOfElement;
    // iterate through the list and find maximum
    Node* current = head->PointerForNextNode;
    // if current node data is greater then maxFoundNow then update maxFoundNow
    while (current != nullptr) {
        if (current->dataOfElement > maxFoundNow) {
            // update maxFoundNow to current node data
            maxFoundNow = current->dataOfElement;
        }
        // to next node in list
        current = current->PointerForNextNode;
    }
    // return max found 
    return maxFoundNow;
}