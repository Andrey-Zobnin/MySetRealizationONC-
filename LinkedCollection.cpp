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

// Finds the minimum element in the list 
int LinkedCollection::findMin() const {
    // if list is empty, return -1
    if (head == nullptr) {
        std::cerr << "Error: List is empty!" << std::endl;
        return -1; // Return -1 if the list is empty
    }

    int minFoundNow = head->dataOfElement;
    // iterate through the list and find minimum
    Node* current = head->PointerForNextNode;
    // if current node data is less then minFoundNow then update minFoundNow
    while (current != nullptr) {
        if (current->dataOfElement < minFoundNow) {
            // update minFoundNow to current node data
            minFoundNow = current->dataOfElement;
        }
        // to next node in list
        current = current->PointerForNextNode;
    }
    // return min found 
    return minFoundNow;
}

// Returns the number of elements in the list
int LinkedCollection::getSize() const {
    // if list is empty, return 0 == size of the list
    int size = 0;
    Node* current = head;
    // iterate through the list and count elements
    while (current != nullptr) {
        // to next node in list
        size++;
        // count elements
        current = current->PointerForNextNode;
    }
    // return size of the list
    return size;
}

// Prints all elements in the list
void LinkedCollection::iterate() const {
    Node* current = head;
    // iterate through the list and print elements
    while (current != nullptr) {
        std::cout << current->dataOfElement << " ";
        // to next node in list
        current = current->PointerForNextNode;
    }
    std::cout << std::endl;
}

// Returns the address of the first node
Node* LinkedCollection::getAddress() const {
    // return address of the first node in the list
    return head;
}

// Concatenates two lists
LinkedCollection LinkedCollection::operator+(const LinkedCollection& other) const {
    // create new list to store concatenated elements from this and other lists
    LinkedCollection result;
    Node* current = head;
    // copy elements from this list to result
    while (current != nullptr) {
        // copy elements from other list to result list
        result.addElement(current->dataOfElement);
        // to next node in list
        current = current->PointerForNextNode;
    }

    current = other.head;
    // copy elements from other list to result
    while (current != nullptr) {
        // copy elements from other list to result list
        result.addElement(current->dataOfElement);
        current = current->PointerForNextNode;
    }
    // return result list pointer
    return result;
}

// Compares two lists for equality
bool LinkedCollection::operator==(const LinkedCollection& other) const {
    // compare elements from this list and other list for equality
    Node* current1 = head;
    Node* current2 = other.head;
    // compare elements from this list and other list for equality and return true if they are equal, otherwise return false
    while (current1 != nullptr && current2 != nullptr) {
        // if elements are not equal then return false
        if (current1->dataOfElement != current2->dataOfElement) {
            return false;
        }
        // to next node in list of elements 
        current1 = current1->PointerForNextNode;
        current2 = current2->PointerForNextNode;
    }
    // if both lists are empty or have same elements then return true, otherwise return false
    return current1 == nullptr && current2 == nullptr;
}