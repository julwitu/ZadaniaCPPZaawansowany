#include "MorseCodeTranslator.h"

MorseCodeTranslator::MorseCodeTranslator()
{
	dictionary.emplace_back(".-", "a");
	dictionary.emplace_back("-...", "b");
	dictionary.emplace_back("-.-.", "c");
	dictionary.emplace_back("-..", "d");
	dictionary.emplace_back(".", "e");
	dictionary.emplace_back("..-.", "f");
	dictionary.emplace_back("--.", "g");
	dictionary.emplace_back("....", "h");
	dictionary.emplace_back("..", "i");
	dictionary.emplace_back(".---", "j");
	dictionary.emplace_back("-.-", "k");
	dictionary.emplace_back(".-..", "l");
	dictionary.emplace_back("--", "m");
	dictionary.emplace_back("-.", "n");
	dictionary.emplace_back("---", "o");
	dictionary.emplace_back(".--.", "p");
	dictionary.emplace_back(".-.", "r");
	dictionary.emplace_back("...", "s");
	dictionary.emplace_back("-", "t");
	dictionary.emplace_back("..-", "u");
	dictionary.emplace_back(".--", "w");
	dictionary.emplace_back("-..-", "x");
	dictionary.emplace_back("-.--", "y");
	dictionary.emplace_back("--..", "z");
}

std::string MorseCodeTranslator::toMorseCode(std::string str)
{
	std::string morseCode;
	for (auto it = str.begin(); it != str.end(); it++) {
		auto index = std::find(dictionary.begin(), dictionary.end(), *it);
		if (index != dictionary.end()) {
			//morseCode += dictionary[index]._alphabet;
		};
	}
	return morseCode;
}

std::string MorseCodeTranslator::fromMorseCode(std::string str)
{
	return std::string();
}

ToTranslate::ToTranslate(std::string morse, std::string alphabet) :
	_morse(morse),
	_alphabet(alphabet)
{
}
