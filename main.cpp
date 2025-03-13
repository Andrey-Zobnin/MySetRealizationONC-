#include "LinkedCollection.h"
#include <iostream>

int main() {
    // Создаем первый список
    LinkedCollection* list1 = new LinkedCollection(); // Используем динамическую память
    list1->AddElement(10);
    list1->AddElement(20);
    list1->AddElement(30);

    // Создаем второй список
    LinkedCollection* list2 = new LinkedCollection();
    list2->AddElement(40);
    list2->AddElement(50);

    // Объединяем списки
    LinkedCollection* list3 = new LinkedCollection(*list1 + *list2);
    std::cout << "Объединенный список: ";
    list3->Iterate();

    // Уничтожаем объекты
    list1->Destroy(); // Уничтожаем list1
    list2->Destroy(); // Уничтожаем list2
    list3->Destroy(); // Уничтожаем list3

    return 0;
}