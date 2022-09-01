#include "RectangleManager.h"
#include "algorithm"
#include <iostream>
void printRect(Rectangle& rect) {
	std::cout << rect.getA() << " " << rect.getB() << std::endl;
}


RectangleManager::RectangleManager()
{
	for (int i = 0; i < 100; i++) {
		rectangles.push_back(RectangleGenerator());
	}
}

void RectangleManager::printRectangles()
{
	std::for_each(rectangles.begin(), rectangles.end(), printRect);
}

size_t RectangleManager::countRectangleBiggerThen(int minArea)
{
	int counter = std::count_if(rectangles.begin(), rectangles.end(), [this, minArea](Rectangle r) {
		return r.area() > minArea;
	});
	return counter;
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
	std::vector <Rectangle> squares;
	std::copy_if(rectangles.begin(), rectangles.end(), std::back_inserter(squares), [this](Rectangle rect) {return rect.isSquare(); });
	std::for_each(squares.begin(), squares.end(), [](Rectangle sq) {std::cout << sq.getA() << " " << sq.getB() << std::endl; });
	return squares;
}

void RectangleManager::sortAreaDescending()
{
	std::sort(rectangles.begin(), rectangles.end(), [](Rectangle first, Rectangle second) {
		return first.area() > second.area();
		});

	//wypisanie dla sprawdzenia
	std::for_each(rectangles.begin(), rectangles.end(), [](Rectangle rect) {std::cout << rect.getA() << " " << rect.getB() << std::endl; });
}

void RectangleManager::deleteInvalid()
{
	auto isZero = [](Rectangle rect) {
		if (rect.getA() == 0 || rect.getB() == 0) {
			return true;
		}
		return false;
	};
	rectangles.erase(std::remove_if(rectangles.begin(), rectangles.end(), isZero), rectangles.end());

	std::for_each(rectangles.begin(), rectangles.end(), [](Rectangle rect) {std::cout << rect.getA() << " " << rect.getB() << std::endl; });;
}
