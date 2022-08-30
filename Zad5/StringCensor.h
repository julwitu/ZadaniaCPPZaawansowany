#pragma once
#include <string>
#include <set>
//Zadanie 5
//Klasa: StringCensor
//Napisz klas� kt�ra b�dzie cenzurowa� podane stringi(zamienia� wymagane litery na gwiazk�), operacje kt�ra ma wspiera� ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)
class StringCensor
{
	std::set<char>censoredLetters;
	bool containsCensoredLetter(char c);
public:
	void addCensoredLetter(char c);
	std::string censor(std::string &str);
};

