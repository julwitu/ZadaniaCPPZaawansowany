#include "CesarCode.h"

std::string CesarCode::cypher(std::string str, int secretValue)
{
    std::string newStr;
    for (auto it = str.begin(); it != str.end(); it++) {
        newStr += *it + secretValue;
    }
    return newStr;
}

std::string CesarCode::decepher(std::string str,  int secretValue)
{
    std::string newStr;
    for (auto it = str.begin(); it != str.end(); it++) {
        newStr += *it-secretValue;
    }
    return newStr;
}
