#include "Rectangle.h"

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
