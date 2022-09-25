#pragma once
#include <vector>
// Zadanie 15
//Napisz program, kt�ry zasymuluje rzut monet�.Wczytaj od uzytkownika ile pr�b ma zosta� wygenerowane, a nast�pnie wypisz :
//-wszystkie wylosowane warto�ci(w postaci ORRORORORRROOORRORO), po 20 warto�ci na 1 wiersz
//- ilo�� wylosowanych or��w i reszek wraz z ich procentowym udzia�em
//- najdlu�szy ci�g samych or��w i samych reszek, wraz z ich d�ugo�ciami i od kt�rej pr�by si� zacz�� ten ci�g
//- (!trudne) najd�u�szy ci�g gdzie orze� i reszka wyst�puj� na zmian�(OROROROROROR)
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

