#ifndef Node_H
#define Node_H

#include <optional>

struct Node {
    // value 
    int dataOfElement;
    // pointer to the next node in the list
    Node* PointerForNextNode;
    // pointer to the previous node in the list
    Node* PointerForPreviosNode;

    Node(int value) : dataOfElement(value), PointerForNextNode(nullptr), PointerForPreviosNode(nullptr) {}
    Node() : PointerForNextNode(nullptr), PointerForPreviosNode(nullptr) {} // Конструктор по умолчанию
};
#endif 