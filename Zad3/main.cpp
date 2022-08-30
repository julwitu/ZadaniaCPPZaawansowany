#include "StringConverter.h"
#include <iostream>
#include <string>
int main() {
	StringConverter s;
	std::string str1 = "helloSDA";
	std::string str2 = "getColour";
	std::string str3 = "isThisFirstEntry";
	std::string str11 = "hello_s_d_a";
	std::string str12 = "get_colour";
	std::string str13 = "is_this_first_entry";
	std::cout << s.toCamelCase(str11)<< std::endl;
	std::cout << s.toCamelCase(str12)<< std::endl;
	std::cout << s.toCamelCase(str13)<< std::endl;

	std::cout << s.toSnakeCase(str1) << std::endl;
	std::cout << s.toSnakeCase(str2) << std::endl;
	std::cout << s.toSnakeCase(str3) << std::endl;
}