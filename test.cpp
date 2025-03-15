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
