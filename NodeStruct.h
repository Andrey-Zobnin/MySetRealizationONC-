#ifndef Node_H
#define Node_H

#include <optional>
/*
 * std::optional - это класс шаблон из стандартной библиотеки C++ (начиная с C++17),
 * который представляет значение, которое может быть либо "присутствующим", либо "отсутствующим".
 *
 * Основные характеристики:
 * 1. Хранение значения: std::optional может хранить значение любого типа или быть "пустым".
 * 2. Безопасность: Позволяет явно проверять наличие значения, избегая неопределённого состояния.
 * 3. Простота использования: Предоставляет удобные методы для работы с значениями.
 *
 * Основные методы:
 * - has_value(): Возвращает true, если объект содержит значение, иначе false.
 * - value(): Возвращает хранимое значение или выбрасывает std::bad_optional_access, если значение отсутствует.
 * - operator*: Позволяет разыменовать объект std::optional для получения значения.
 * - operator->: Позволяет получить доступ к членам объекта, если он содержит значение.
 * - reset(): Очищает значение, делая объект пустым.
 * - emplace(): Создаёт значение внутри std::optional, используя конструктор.
 *
 * Преимущества:
 * - Ясность: Код становится более читаемым и понятным.
 * - Безопасность: Уменьшается вероятность ошибок, связанных с неинициализированными указателями.
 * - Удобство: Упрощает работу с функциями, которые могут не возвращать значения.
 */

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