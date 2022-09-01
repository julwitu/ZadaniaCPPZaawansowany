#pragma once
#include <string>
#include <vector>
//Zadanie 4
//Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//https ://morsecode.world/international/translator.html
struct ToTranslate{
	ToTranslate(std::string morse, std::string alphabet);
	std::string _morse;
	std::string _alphabet;
};

class MorseCodeTranslator
{
	std::vector<ToTranslate>dictionary;
public:
	MorseCodeTranslator();
	std::string toMorseCode(std::string str);
	std::string fromMorseCode(std::string str);
};

