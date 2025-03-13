#ifndef LINKEDCOLLECTION_H
#define LINKEDCOLLECTION_H

#include "NodeStruct.h"
#include <optional> // For using std::optional
#include <iostream>

// Class representing a linked collection of integers.
class LinkedCollection {

private:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list

    // Private destructor
    ~LinkedCollection(); 

    // Helper method to free memory
    void Clear(); // Frees the memory allocated for the list nodes

public:
    // Default constructor
    LinkedCollection(); // Initializes head and tail as nullptr

    // Copy constructor
    LinkedCollection(const LinkedCollection& other); // Copies elements from another list

    // Method for explicit destruction of the object
    void Destroy(); // Destroys the object and frees memory

    // Adds an element to the end of the list
    void AddElement(int value); // Inserts a new node with the given value

    // Removes the first found element with the given value
    std::optional<bool> RemoveElement(int value); // Removes the node with the specified value

    // Returns the maximum element in the list
    std::optional<int> FindMax() const; // Finds the maximum value in the list

    // Returns the minimum element in the list
    std::optional<int> FindMin() const; // Finds the minimum value in the list

    // Returns the number of elements in the list
    int GetSize() const; // Counts the number of nodes in the list

    // Prints the elements of the list
    void Iterate() const; // Prints all elements in the list

    // Returns a pointer to the first element (head)
    Node* GetAddress() const; // Returns a pointer to the head node

    // List concatenation operator
    LinkedCollection operator+(const LinkedCollection& other) const; // Merges two lists

    // List comparison operator
    bool operator==(const LinkedCollection& other) const; // Compares two lists
};

#endif