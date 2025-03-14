#ifndef Node_H
#define Node_H

// деструктор - это функция, которая вызывается автоматически, когда объект выходит из области
// конструктор - это функция, описывает то, каким образом должен быть собран/инициализирован новый объект (экземпляр класса), например, какие должны быть значения полей у только что созданного объекта. Без вызова конструктора невозможно создать экземпляр данного класса.

struct Node {
    // value 
    int dataOfElement;
    // pointer to the next node in the list
    Node* PointerForNextNode;
    // pointer to the previous node in the list
    Node* PointerForPreviosNode;
    //constructer function
    // constructor function for create node with value_data pointer
    Node(int value) : dataOfElement(value), PointerForNextNode(nullptr), PointerForPreviosNode(nullptr) {}

    // default constructor function
    Node() : dataOfElement(0), PointerForNextNode(nullptr), PointerForPreviosNode(nullptr) {}
};

#endif 