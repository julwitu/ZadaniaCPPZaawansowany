// Zadanie 15
//Napisz program, który zasymuluje rzut monet¹.Wczytaj od uzytkownika ile prób ma zostaæ wygenerowane, a nastêpnie wypisz :
//-wszystkie wylosowane wartoœci(w postaci ORRORORORRROOORRORO), po 20 wartoœci na 1 wiersz
//- iloœæ wylosowanych or³ów i reszek wraz z ich procentowym udzia³em
//- najdlu¿szy ci¹g samych or³ów i samych reszek, wraz z ich d³ugoœciami i od której próby siê zacz¹³ ten ci¹g
//- (!trudne) najd³u¿szy ci¹g gdzie orze³ i reszka wystêpuj¹ na zmianê(OROROROROROR)

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


