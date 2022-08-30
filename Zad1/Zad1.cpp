// Zadanie 1
//Napisz funkcjê, która odwróci podanego stringa.
#include <iostream>
#include <string>


std::string stringReverse(std::string& str) {
    std::string temp;
    std::copy(str.rbegin(), str.rend(), std::back_inserter(temp));
    str = temp;
    return str;
}
int main()
{
    std::string text= "Paoafba";
    stringReverse(text);
    std::cout << text;
}

