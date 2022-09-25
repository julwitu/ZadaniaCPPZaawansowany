#pragma once
#include <vector>
// Zadanie 15
//Napisz program, który zasymuluje rzut monet¹.Wczytaj od uzytkownika ile prób ma zostaæ wygenerowane, a nastêpnie wypisz :
//-wszystkie wylosowane wartoœci(w postaci ORRORORORRROOORRORO), po 20 wartoœci na 1 wiersz
//- iloœæ wylosowanych or³ów i reszek wraz z ich procentowym udzia³em
//- najdlu¿szy ci¹g samych or³ów i samych reszek, wraz z ich d³ugoœciami i od której próby siê zacz¹³ ten ci¹g
//- (!trudne) najd³u¿szy ci¹g gdzie orze³ i reszka wystêpuj¹ na zmianê(OROROROROROR)
class CoinToss
{
	std::vector<char>OR;
	int _flips;
	int generateNumber();
	void setCounter(int& tmp, int& counter);
	void printLongestRO();
	void printLongestOR();
	int findIndex(std::vector<char> vct, int counter, char c);
	int findIndex(std::vector<char>vct, int counter, char c1, char c2);
public:
	CoinToss(int flips);
	void tossCoin();
	void printResult();
	void printPercentage();
	void printLongestO();
	void printLongestR();
	void printLongestSequence();
	
};

