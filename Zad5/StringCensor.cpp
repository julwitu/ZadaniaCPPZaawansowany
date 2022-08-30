#include "StringCensor.h"
#include <iostream>
#include <algorithm>
bool StringCensor::containsCensoredLetter(char c)
{
	if ((std::find(censoredLetters.begin(), censoredLetters.end(), c) != censoredLetters.end())) {
		return true;
	};	
	return false;
}
void StringCensor::addCensoredLetter(char c)
{
	censoredLetters.emplace(c);
}

std::string StringCensor::censor(std::string &str)
{
	std::replace_if(str.begin(), str.end(), containsCensoredLetter, '*');
}
