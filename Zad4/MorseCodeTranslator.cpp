#include "MorseCodeTranslator.h"
#include <map>
#include <algorithm>


std::string MorseCodeTranslator::toMorseCode(std::string str)
{
	std::string morseCode;
	std::for_each(str.begin(), str.end(), [&morseCode, this](char c) {
		morseCode += translateLetter(c);
		morseCode += ' ';
		});
	return morseCode;
}

std::string MorseCodeTranslator::fromMorseCode(std::string str)
{
	std::string translatedMorse;
	std::string temp;
	for (auto it = str.begin(); it != str.end(); it++) {
		if (*it != ' ') {
			temp += *it;
		}
		else {
			translatedMorse += translateMorse(temp);
			temp = "";
		}
	}
	translatedMorse += translateMorse(temp);
	return translatedMorse;
}

std::string MorseCodeTranslator::translateLetter(char c)
{
	return letterToMorse[c];
}

char MorseCodeTranslator::translateMorse(std::string str)
{
	return morseToLetter[str];
}


