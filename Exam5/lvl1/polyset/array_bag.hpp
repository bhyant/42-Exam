#ifndef ARRAY_BAG_HPP
#define ARRAY_BAG_HPP

#include "bag.hpp"
#include <iostream>

class array_bag : virtual public bag {
protected:
int *_data;
int _size;

public:
array_bag();
array_bag(const array_bag& other);
~array_bag();
array_bag& operator=(const array_bag& other);

void insert(int v);
void insert(int* data, int v);
void print() const;
void clear();
};

#endif
