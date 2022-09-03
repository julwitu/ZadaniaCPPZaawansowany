#pragma once
#include <string>
#include <vector>
//\Stw�rz klas� BigInt, kt�ra b�dzie mog�a przechowywa� dowolnie du�� liczb� ca�kowit�.
//Do implementacji mo�esz u�y� wewn�trz stringa lub tablicy dynamicznej std::vector<short>.
//Zaimplementuj:
//c - tor domyslny(daje 0)
//c - tor z 1 parametrem(long long)
//c - tor kopiuj�cy
//toString()
//operator=
//operator+
//operator*
//operator/
//operator%
//Wszystkie operatory por�wnania(Przypominam, �e wystarczy zaimplementowa� 1, a potem za jego pomoc� reszt�)
//Uwaga!Napisz testy.
class BigInt
{
	std::vector<short int>numbers;
public:
	BigInt();
	BigInt(long long number);
	BigInt(const BigInt& other);
	BigInt& operator=(const BigInt& other);
	void toString();
	BigInt& operator+(BigInt bigInt);
	BigInt operator*(const BigInt& bigInt);
	BigInt operator/(const BigInt& bigInt);
	BigInt operator%(const BigInt & bigInt);
	
};

