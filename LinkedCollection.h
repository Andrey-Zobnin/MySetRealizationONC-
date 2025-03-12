#ifndef LINKEDCOLLECTION_H
#define LINKEDCOLLECTION_H

#include "NodeStruct.h"
#include <optional> // For using std::optional
#include <iostream>

/*
 The LinkedCollection class implements a doubly linked list.
 Each node in the list stores a value and pointers to the next and previous nodes.
 */
class LinkedCollection {
private:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
public:
    // Default constructor (creates an empty list)
    LinkedCollection(void); 
    // Initializes head and tail as nullptr

    // Copy constructor
    LinkedCollection(const LinkedCollection& other); 
    // Copies elements from another list

};

#endif // LINKEDCOLLECTION_H