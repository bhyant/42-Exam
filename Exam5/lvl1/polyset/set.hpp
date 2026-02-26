#pragma once

#include "searchable_bag.hpp"

class set
{
	private:
		searchable_bag& s_bag;
	public:
		set() = delete;
		set(const set& src) = delete;
		set operator=(const set& src) = delete;
		set(searchable_bag& src) : s_bag(src) {}
		~set() {}

		void insert(int value)
		{
			if (!this->s_bag.has(value))
				this->s_bag.insert(value);
		}
		void insert(int *array, int size)
		{
			for (int i = 0; i < size; i++)
			{
				if (!this->s_bag.has(array[i]))
					this->s_bag.insert(array[i]);
			}
		}
		bool has(int value) const
		{
			return this->s_bag.has(value);
		}
		void print() const
		{
			this->s_bag.print();
		}
		void clear()
		{
			this->s_bag.clear();
		}
};
