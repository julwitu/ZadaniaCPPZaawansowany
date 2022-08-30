#pragma once
#include <string>
#include <set>
//Zadanie 5
//Klasa: StringCensor
//Napisz klasê która bêdzie cenzurowaæ podane stringi(zamieniaæ wymagane litery na gwiazkê), operacje która ma wspieraæ ta klasa :
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

