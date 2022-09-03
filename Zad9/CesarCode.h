#pragma once
#include <string>
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara

class CesarCode
{
public:
	std::string cypher(std::string str, int secretValue);
	std::string decepher(std::string str, int secretValue);
};

