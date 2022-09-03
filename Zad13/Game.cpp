#include "Game.h"
#include <random>
#include <cmath>
#include <cstdlib>
#include <iostream>
void Game::generate()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution<int> dist(0, 100);
    secretNumber = dist(randomEngine);
}

void Game::guessNumber()
{
    std::cout << "Podaj numer: " << std::endl;
    int number;
    do {
        std::cin >> number;
        play(number);
    } while (!checkWin(number));
}

bool Game::checkWin(int number)
{
    return secretNumber == number;
}

void Game::play(int number)
{
    if (number > secretNumber) {
        std::cout << "Podales za duzy numer" << std::endl;
        youAreClose(number);
    }
    else if(secretNumber>number) {
        std::cout << "Podales za maly numer" << std::endl;
        youAreClose(number);
    }
    else {
        std::cout << "Wygrales" << std::endl;
    }
}

void Game::youAreClose(int number)
{
    if (abs(number - secretNumber) <= 3) {
        std::cout << "Jestes bardzo blisko" << std::endl;
    }
}

