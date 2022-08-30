#include "StringConverter.h"
#include <string>
#include <algorithm>
//	std::string toCamelCase(std::string)
//	std::string toSnakeCase(std::string)
//	camelCase : snake_case
//	helloSDA : hello_S_D_A
//	getColour : get_colour
//	isThisFirstEntry : is_this_first_entry

std::string StringConverter::toCamelCase(std::string& str)
{
    for (auto it = str.begin() + 1; it != str.end(); it++) {
        if (*it == '_') {
            *(it + 1) -= 32;
        }
    }
    str.erase(std::remove(str.begin(), str.end(), '_'), str.end());
    return str;
}

std::string StringConverter::toSnakeCase(std::string& str)
{
    std::string temp;
    for (auto it = str.begin(); it != str.end(); it++) {
        if (*it >64 && *it<90) {
            temp += '_';
            temp += *it + 32;
        }
        else {
            temp += *it;
        }
    }
    str = temp;
    return str;
}
