#include "StringCensor.h"
#include <iostream>
int main() {
	StringCensor censor;
	censor.addCensoredLetter('a');
	censor.addCensoredLetter('r');
	std::string str = "antananarywa";
	std::cout << censor.censor(str);
}