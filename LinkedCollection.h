#ifndef LINKEDCOLLECTION_H
#define LINKEDCOLLECTION_H

#include "NodeStruct.h"

// Class representing a doubly linked list
class LinkedCollection {
private:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list

public:
    // Constructors
    LinkedCollection(); // Default constructor
    LinkedCollection(const LinkedCollection& other); // Copy constructor
    ~LinkedCollection(); // Destructor

    // Methods for working with elements
    void addElement(int value); // Adds an element to the end of the list
    bool removeElement(int value); // Removes the first occurrence of an element
    int findMax() const; // Finds the maximum element in the list
    int findMin() const; // Finds the minimum element in the list

    // Methods for working with the list
    int getSize() const; // Returns the number of elements in the list
    void iterate() const; // Prints all elements in the list
    Node* getAddress() const; // Returns the address of the first node

    // Operators
    LinkedCollection operator+(const LinkedCollection& other) const; // Concatenates two lists
    bool operator==(const LinkedCollection& other) const; // Compares two lists for equality
};

#endif 