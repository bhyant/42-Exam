#include "vect2.hpp"

vect2::vect2() : x(0), y(0)
{
}

vect2::vect2(int a, int b) : x(a), y(b)
{
}

vect2::vect2(const vect2& src) : x(src.x), y(src.y)
{
}

vect2& vect2::operator=(const vect2& src)
{
	if (this != &src)
	{
		this->x = src.x;
		this->y = src.y;
	}
	return *this;
}

vect2::~vect2()
{
}

int vect2::operator[](int index) const
{
	if (index == 0)
		return this->x;
	return this->y;
}

int& vect2::operator[](int index)
{
	if (index == 0)
		return this->x;
	return this->y;
}

vect2 vect2::operator-() const
{
	vect2 tmp = *this;

	tmp[0] = -tmp[0];
	tmp[1] = -tmp[1];
	return tmp;
}

vect2 vect2::operator*(int num) const
{
	vect2 tmp;

	tmp.x = this->x * num;
	tmp.y = this->y * num;
	return tmp;
}

vect2& vect2::operator*=(int num)
{
	this->x *= num;
	this->y *= num;
	return *this;
}

vect2& vect2::operator+=(const vect2& src)
{
	this->x += src.x;
	this->y += src.y;
	return *this;
}

vect2& vect2::operator-=(const vect2& src)
{
	this->x -= src.x;
	this->y -= src.y;
	return *this;
}

vect2&	vect2::operator*=(const vect2& src)
{
	this->x *= src.x;
	this->y *= src.y;
	return *this;
}

vect2 vect2::operator+(const vect2& src) const
{
	vect2 tmp = *this;

	tmp.x += src.x;
	tmp.y += src.y;
	return tmp;
}

vect2 vect2::operator-(const vect2& src) const
{
	vect2 tmp = *this;

	tmp.x -= src.x;
	tmp.y -= src.y;
	return tmp;
}

vect2& vect2::operator++()
{
	this->x += 1;
	this->y += 1;
	return *this;
}

vect2 vect2::operator++(int)
{
	vect2 tmp = *this;

	++(*this);
	return tmp;
}

vect2& vect2::operator--()
{
	this->x -= 1;
	this->y -= 1;
	return *this;
}

vect2 vect2::operator--(int)
{
	vect2 tmp = *this;

	--(*this);
	return tmp;
}

bool vect2::operator==(const vect2& src) const
{
	if ((this->x == src.x) && (this->y == src.y))
		return true;
	return false;
}

bool vect2::operator!=(const vect2& src) const
{
	return (!(src != *this));
}

std::ostream& operator<<(std::ostream& os, const vect2& src)
{
	std::cout << "{" << src[0] << ", " << src[1] << "}";
	return os;
}

vect2 operator*(int num, const vect2& src)
{
	vect2 tmp(src);
	tmp *= num;
	return tmp;
}
