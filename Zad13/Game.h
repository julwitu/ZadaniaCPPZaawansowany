#pragma once
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedzia�u 1 - 100, a uzytkownik proboje zgadn��.
//Po kazdej pr�bie program podpowiada czy liczba jest wi�ksza czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomi� gracza o tym, �e jest blisko.
//Zadanie mo�na rozwi�zac za pomoc� jednej klasy GuessTheNumb//
class Game
{
	int secretNumber;
public:
	void generate();
	void guessNumber();
	bool checkWin(int number);
	void play(int number);
	void youAreClose(int number);
};

