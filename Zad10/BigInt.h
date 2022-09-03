#pragma once
#include <string>
#include <vector>
//\Stwórz klasê BigInt, która bêdzie mog³a przechowywaæ dowolnie du¿¹ liczbê ca³kowit¹.
//Do implementacji mo¿esz u¿yæ wewn¹trz stringa lub tablicy dynamicznej std::vector<short>.
//Zaimplementuj:
//c - tor domyslny(daje 0)
//c - tor z 1 parametrem(long long)
//c - tor kopiuj¹cy
//toString()
//operator=
//operator+
//operator*
//operator/
//operator%
//Wszystkie operatory porównania(Przypominam, ¿e wystarczy zaimplementowaæ 1, a potem za jego pomoc¹ resztê)
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

