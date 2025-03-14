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

}