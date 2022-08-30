#pragma once
//Zadanie 3
//Napisz klasê StringConverter, która bedzie mia³a dwie metody(statyczne) :
//	std::string toCamelCase(std::string)
//	std::string toSnakeCase(std::string)
//	camelCase : snake_case
//	helloSDA : hello_S_D_A
//	getColour : get_colour
//	isThisFirstEntry : is_this_first_entry
#include <string>
class StringConverter
{
public:
	static std::string toCamelCase(std::string& str);
	static std::string toSnakeCase(std::string& str);
};

