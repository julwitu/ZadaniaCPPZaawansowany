#include "Rectangle.h"

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

int Rectangle::area()
{
	return a*b;
}

bool Rectangle::isSquare()
{
	return a == b;
}

int Rectangle::getA()
{
	return a;
}

int Rectangle::getB()
{
	return b;
}
