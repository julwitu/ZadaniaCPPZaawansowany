// Zadanie 15
//Napisz program, kt?ry zasymuluje rzut monet?.Wczytaj od uzytkownika ile pr?b ma zosta? wygenerowane, a nast?pnie wypisz :
//-wszystkie wylosowane warto?ci(w postaci ORRORORORRROOORRORO), po 20 warto?ci na 1 wiersz
//- ilo?? wylosowanych or??w i reszek wraz z ich procentowym udzia?em
//- najdlu?szy ci?g samych or??w i samych reszek, wraz z ich d?ugo?ciami i od kt?rej pr?by si? zacz?? ten ci?g
//- (!trudne) najd?u?szy ci?g gdzie orze? i reszka wyst?puj? na zmian?(OROROROROROR)

#include <iostream>
#include "CoinToss.h"
int main()
{
    CoinToss c(74);
    c.tossCoin();
    c.printResult();
    std::cout << std::endl;
    c.printPercentage();
    std::cout << std::endl;
    c.printLongestO();
    c.printLongestR();
    c.printLongestSequence();

}


