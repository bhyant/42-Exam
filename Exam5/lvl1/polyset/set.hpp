#pragma once

#include "bag.hpp"
#include "searchable_bag.hpp"

class set
{
	private:
		searchable_bag &bag;
	public:
		set(searchable_bag& obj) : bag(obj) {}
		set(const searchable_bag& src) : bag(src.bag) {}
		set& operator=(const searchable_bag& src)
		{
			if (this != &src)
				bag::operator=(src.bag);
			return *this;
		}
		~set() {}
		bool has(int value) const
		{
			return bag.has(value);
		}
		void insert(int value)
		{
			if (!bag.has(value))
				bag.insert(value);
		}
		void insert(int *array, int count)
		{
			for (int i = 0; i < count; i++)
				bag.insert(array[i]);
		}
		void clear ()
		{
			bag.clear();
		}
		void print() const
		{
			bag.print();
		}
		searchable_bag &get_bag() const
		{
			return bag;
		}
};
