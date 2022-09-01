#include "MorseCodeTranslator.h"
#include <iostream>

int main() {
	MorseCodeTranslator translator;
	std::cout << translator.toMorseCode("julia") << std::endl;
	std::cout << translator.fromMorseCode(".--- ..- .-.. .. .-");
}