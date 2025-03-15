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

// Тест для метода findMin
void testFindMin() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(50);
    list.addElement(30);

    std::cout << "Test FindMin: " << list.findMin() << std::endl; // Ожидаемый вывод: 10
}

// Тест для метода getSize
void testGetSize() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);

    std::cout << "Test GetSize: " << list.getSize() << std::endl; // Ожидаемый вывод: 3
}

// Тест для оператора конкатенации (+)
void testConcatenation() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    LinkedCollection list2;
    list2.addElement(30);
    list2.addElement(40);

    LinkedCollection list3 = list1 + list2;
    std::cout << "Test Concatenation: ";
    list3.iterate(); // Ожидаемый вывод: 20 10 40 30
}

// Тест для оператора равенства (==)
void testEquality() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    LinkedCollection list2;
    list2.addElement(10);
    list2.addElement(20);

    std::cout << "Test Equality: " << (list1 == list2 ? "Equal" : "Not Equal") << std::endl; // Ожидаемый вывод: Equal
}

// Тест для конструктора копирования
void testCopyConstructor() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    LinkedCollection list2(list1);
    std::cout << "Test CopyConstructor: ";
    list2.iterate(); // Ожидаемый вывод: 20 10
}

// Тест для метода getAddress
void testGetAddress() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);

    std::cout << "Test GetAddress: " << list.getAddress() << std::endl; // Ожидаемый вывод: Адрес первого узла
}