#pragma once
#include <vector>
//Zadanie 8
//Klasy: Rectangle(przechowuje d³ugoœci boków, wylicza pole, isSquare()), RectangleGenerator(Klasa genreuj¹ca losowy prostok¹t o boku z podanego przedzia³u), RectangleManger(tutaj faktycznie implementujemy zadania)
//Utwórz wektor 100 prostok¹tów o losowych d³ugoœciach boków z przedzia³u 0, 10 (u¿yj liczb ca³kowitych)
//a) void printRectangles() - Wypisz wszystkie prostok¹ty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok¹tów o polu wiêkszym ni¿ 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostk¹ty, które s¹ kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostok¹tów malejaco wed³ug pola powierzchni
//e) void deleteInvalid() Usuñ wszystkie prostok¹ty, które maj¹ przynajmniej jeden bok równy 0

class RectangleManager
{
public:
	void printRectangles();
	size_t countRectangleBiggerThen(int area);
	std::vector <Rectangle> copyRectangles;
	void sortAreaDescending();
	void deleteInvalid();

};

