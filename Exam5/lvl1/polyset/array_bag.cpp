#include "array_bag.hpp"
#include <iostream>

array_bag::array_bag() : _data(NULL), _size(0) {}

array_bag::array_bag(const array_bag& other) : _data(NULL), _size(0) {
    if (other._size > 0) {
        _data = new int[other._size];
        _size = other._size;
        for (int i = 0; i < _size; i++)
            _data[i] = other._data[i];
    }
}

array_bag::~array_bag() {
    clear();
}

array_bag& array_bag::operator=(const array_bag& other) {
    if (this != &other) {
        clear();
        if (other._size > 0) {
            _data = new int[other._size];
            _size = other._size;
            for (int i = 0; i < _size; i++)
                _data[i] = other._data[i];
        }
    }
    return *this;
}

void array_bag::insert(int value) {
    int* newData = new int[_size + 1];
    for (int i = 0; i < _size; i++)
        newData[i] = _data[i];
    newData[_size] = value;
    delete[] _data;
    _data = newData;
    _size++;
}

void array_bag::insert(int* array, int arraySize) {
    for (int i = 0; i < arraySize; i++)
        insert(array[i]);
}

void array_bag::print() const {
    for (int i = 0; i < _size; i++)
        std::cout << _data[i] << " ";
    std::cout << std::endl;
}

void array_bag::clear() {
    delete[] _data;
    _data = NULL;
    _size = 0;
}
