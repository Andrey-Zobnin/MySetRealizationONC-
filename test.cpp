#include "test.h"
#include <iostream>


void testAddElement() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);

    std::cout << "Test AddElement: ";
    list.iterate(); // Ожидаемый вывод: 30 20 10
}

// Тест для метода removeElement
void testRemoveElement() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);

    std::cout << "Test RemoveElement (before removal): ";
    list.iterate(); // Ожидаемый вывод: 30 20 10

    bool removed = list.removeElement(20);
    std::cout << "Element 20 removed: " << (removed ? "Success" : "Failed") << std::endl;

    std::cout << "Test RemoveElement (after removal): ";
    list.iterate(); // Ожидаемый вывод: 30 10
}

// Тест для метода findMax
void testFindMax() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(50);
    list.addElement(30);

    std::cout << "Test FindMax: " << list.findMax() << std::endl; // Ожидаемый вывод: 50
}
