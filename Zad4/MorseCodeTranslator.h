#pragma once
#include <string>
#include <vector>
#include <map>
//Zadanie 4
//Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//https ://morsecode.world/international/translator.html

class MorseCodeTranslator
{
	std::map <std::string, char> morseToLetter{ {".-", 'a'},{"-...", 'b'}, {"-.-.", 'c'},{"-..", 'd'}, {".", 'e'}, {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'}, {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {".--", 'w'}, {"-..-", 'x'}, {"-.--", 'y'}, {"--..", 'z'} };;
	std::map<char, std::string> letterToMorse{ {'a', ".- "},{'b', " -..."}, {'c', " -.-."},{'d', " -.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', " -.-"}, {'l', ".-.."}, {'m', "--"}, {'n', " -."}, {'o', "---"}, {'p', ".--."}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'w', ".--"}, {'x', " -..-"}, {'y', "-.--"}, {'z', "--.."} };

public:
	std::string toMorseCode(std::string str);
	std::string fromMorseCode(std::string str);
	std::string translateLetter(char c);
	char translateMorse(std::string str);
};

