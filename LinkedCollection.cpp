#include "LinkedCollection.h"
#include <algorithm>
#include <iostream>
#include <optional>

// Конструктор по умолчанию
LinkedCollection::LinkedCollection()
{}

// Конструктор копирования
LinkedCollection::LinkedCollection(const LinkedCollection& other)
{}

// Деструктор
LinkedCollection::~LinkedCollection()
{}

// Метод для добавления элемента
void LinkedCollection::AddElement(int value)
{}

// Метод для удаления элемента
bool LinkedCollection::RemoveElement(int value)
{}

// Метод для поиска максимального элемента
std::optional<int> LinkedCollection::FindMax() const
{}

// Метод для поиска минимального элемента
std::optional<int> LinkedCollection::FindMin() const
{}

// Метод для получения размера коллекции
int LinkedCollection::GetSize() const
{}

// Метод для итерации по элементам
void LinkedCollection::Iterate() const
{}

// Метод для получения адреса первого элемента
Node* LinkedCollection::GetAddress() const
{}

// Оператор сложения
LinkedCollection LinkedCollection::operator+(const LinkedCollection& other) const
{}

// Оператор сравнения
bool LinkedCollection::operator==(const LinkedCollection& other) const
{}

// Метод для очистки коллекции
void LinkedCollection::Clear()
{}