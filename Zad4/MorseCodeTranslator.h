#pragma once
#include <string>
//Zadanie 4
//Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//https ://morsecode.world/international/translator.html
class MorseCodeTranslator
{

public:
	std::string toMorseCode(std::string str);
	std::string fromMorseCode(std::string str);
};

