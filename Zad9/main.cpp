//Zadanie 9
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara

#include <iostream>
#include "CesarCode.h"

int main() {
	CesarCode code;
	std::cout << code.cypher("julia", 65);
	std::cout << std::endl;
	std::cout << code.decepher("mxold", 3);
}