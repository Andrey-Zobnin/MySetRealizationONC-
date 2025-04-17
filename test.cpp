#include "test.h"
#include <iostream>

void testAddElement() {
    LinkedCollection list;
    std::cout << "=== Test AddElement ===" << std::endl;
    
    std::cout << "Massive before add element: ";
    list.iterate(); 

    list.addElement(10);
    list.addElement(20);
    list.addElement(30);
    // need to out the after result 
    std::cout << "After adding 10, 20, 30: ";
    list.iterate(); // Ожидаемый вывод: 30 20 10
    std::cout << std::endl;
}

void testRemoveElement() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);

    std::cout << "=== Test RemoveElement ===" << std::endl;
    std::cout << "Before: ";
    list.iterate(); // 30 20 10

    bool removed = list.removeElement(20);
    // use ternrar operator for remove is new for me in test pls comment about use ternors operator
    std::cout << "Operation: Remove 20 (" << (removed ? "Success" : "Failed") << ")" << std::endl;
    // OUTPUT massive   
    std::cout << "After: ";
    list.iterate(); 
    std::cout << std::endl;
}

void testFindMax() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(50);
    list.addElement(30);

    std::cout << "=== Test FindMax ===" << std::endl;
    std::cout << "List: ";
    list.iterate(); // 30 50 10

    std::cout << "Max: " << list.findMax() << std::endl; // 50
    std::cout << std::endl;
}

void testFindMin() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(50);
    list.addElement(30);

    std::cout << "=== Test FindMin ===" << std::endl;
    std::cout << "List: ";
    list.iterate(); // 30 50 10

    // use function to find min value 
    std::cout << "Min: " << list.findMin() << std::endl; // 10
    std::cout << std::endl;
}

void testGetSize() {
    LinkedCollection list;
    std::cout << "=== Test GetSize ===" << std::endl;
    std::cout << "Before: ";
    std::cout << "Size: " << list.getSize() << " | List: ";
    list.iterate(); 

    list.addElement(10);
    list.addElement(20);
    list.addElement(30);

    std::cout << "After adding 3 elements: ";
    std::cout << "Size: " << list.getSize() << " | List: ";
    list.iterate(); // | 30 20 10
    std::cout << std::endl;
}

void testConcatenation() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    LinkedCollection list2;
    list2.addElement(30);
    list2.addElement(40);

    std::cout << "=== Test Concatenation ===" << std::endl;
    std::cout << "List1: ";
    list1.iterate(); // 20 10
    std::cout << "List2: ";
    list2.iterate(); // 40 30

    LinkedCollection list3 = list1 + list2;
    std::cout << "After concatenation (list1 + list2): ";
    list3.iterate(); // 20 10 40 30
    std::cout << std::endl;
}

void testEquality() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    LinkedCollection list2;
    list2.addElement(10);
    list2.addElement(20);

    std::cout << "=== Test Equality ===" << std::endl;
    std::cout << "List1: ";
    list1.iterate(); // 20 10
    std::cout << "List2: ";
    list2.iterate(); // 20 10

    std::cout << "Are equal? " << (list1 == list2 ? "Yes" : "No") << std::endl;
    std::cout << std::endl;
}

void testCopyConstructor() {
    LinkedCollection list1;
    list1.addElement(10);
    list1.addElement(20);

    std::cout << "=== Test CopyConstructor ===" << std::endl;
    std::cout << "Original: ";
    list1.iterate(); // 20 10

    LinkedCollection list2(list1);
    std::cout << "Copy: ";
    list2.iterate(); // 20 10
    std::cout << std::endl;
}

void testGetAddress() {
    LinkedCollection list;
    list.addElement(10);
    list.addElement(20);

    std::cout << "=== Test GetAddress ===" << std::endl;
    std::cout << "List: ";
    list.iterate(); // 20 10

    std::cout << "Address of first element: " << list.getAddress() << std::endl;
    std::cout << std::endl;
}