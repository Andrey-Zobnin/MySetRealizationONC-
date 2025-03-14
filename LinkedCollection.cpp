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
