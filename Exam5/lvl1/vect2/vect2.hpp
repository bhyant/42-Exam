#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>

class vect2
{
	private:
		int x;
		int y;
	public:
		vect2();
		vect2(int a, int b);
		vect2(const vect2& src);
		vect2& operator=(const vect2& src);
		~vect2();

		int operator[](int index) const;
		int& operator[](int indec);

		vect2	operator-() const;
		vect2	operator*(int num) const;

		vect2& operator*=(int num);

		vect2& operator+=(const vect2& src);
		vect2& operator-=(const vect2& src);
		vect2& operator*=(const vect2& src);

		vect2 operator+(const vect2& src) const;
		vect2 operator-(const vect2& src) const;
		vect2 operator*(const vect2& src) const;

		vect2 operator++(int);
		vect2 operator--(int);
		vect2& operator++();
		vect2& operator--();

		bool operator==(const vect2& src) const;
		bool operator!=(const vect2& src) const;
};

vect2 operator*(int num, const vect2& obj);

std::ostream& operator<<(std::ostream& os, const vect2& src);

#endif
