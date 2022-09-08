#include "CesarCode.h"
//do poprawienia
std::string CesarCode::cypher(std::string str, int secretValue)
{
    std::string newStr;
    if (secretValue > 25) {
        int numToAdd = secretValue % 25;
        for (auto it = str.begin(); it != str.end(); it++) {
            if (*it + numToAdd > 'Z') {
                newStr += (numToAdd - (90 - *it));
            }
            else {
                newStr += *it + numToAdd;
            }
        }
    }
    else {
        for (auto it = str.begin(); it != str.end(); it++) {
            newStr += *it + secretValue;
        }
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
