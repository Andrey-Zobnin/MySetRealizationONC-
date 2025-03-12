#ifndef Node_H
#define Node_H

struct Node {
    // value 
    int dataOfElement;
    // pointer to the next node in the list
    Node* PointerForNextNode;
    // pointer to the previous node in the list
    Node* PointerForPreviosNode;

};

#endif 