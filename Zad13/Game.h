#pragma once
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedzia³u 1 - 100, a uzytkownik proboje zgadn¹æ.
//Po kazdej próbie program podpowiada czy liczba jest wiêksza czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomiæ gracza o tym, ¿e jest blisko.
//Zadanie mo¿na rozwi¹zac za pomoc¹ jednej klasy GuessTheNumb//
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

