#include "CoinToss.h"
#include <random>
#include <iostream>
#include <algorithm>

int CoinToss::generateNumber()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution<int> dist(1, 2);
    return dist(randomEngine);
}


CoinToss::CoinToss(int flips) :
	_flips(flips)
{
}

void CoinToss::tossCoin()
{
    for (int i = 0; i < _flips; i++) {
        int number = generateNumber();
        if (number == 1) {
            OR.push_back('O');
        }
        else {
            OR.push_back('R');
        }
    }
}

void CoinToss::printResult()
{
    for (int i = 0; i < OR.size(); i++) {
        if (i % 20 == 0 && i!=0) {
            std::cout << std::endl;
        }
    std::cout << OR[i];
    }
}

void CoinToss::printPercentage()
{
    int counterO = 0;
    int counterR = 0;
    std::for_each(OR.begin(), OR.end(), [&](char c) {
        if (c == 'O') {
            counterO++;
        }
        else {
            counterR++;
        }
        });
    auto PercO = (counterO*100) / OR.size();
    auto PercR = (counterR*100) / OR.size();
    std::cout << "Liczba O: " << PercO << std::endl;
    std::cout << "Liczba R: " << PercR << std::endl;
}

void CoinToss::printLongestO()
{
    int counter = 0;
    int tmp = 0;
    for (auto it = OR.begin(); it != OR.end(); it++) {
        if (*it == 'O') {
            tmp++;
        }
        else {
            if (tmp > counter) {
                counter = tmp;
            }
            tmp = 0;
        }
    }
    std::cout << counter << std::endl;
}

void CoinToss::printLongestR()
{
    int counter = 0;
    int tmp = 0;
    for (auto it = OR.begin(); it != OR.end(); it++) {
        if (*it == 'R') {
            tmp++;
        }
        else {
            if (tmp > counter) {
                counter = tmp;
            }
            tmp = 0;
        }
    }
    std::cout << counter << std::endl;
}

void CoinToss::setCounter(int& tmp, int& counter)
{
    if (tmp > counter) {
        counter = tmp;
    }
    tmp = 0;
}
void CoinToss::printLongestRO()
{
    int counterRO = 0;
    int tmpRO = 0;
    for (auto it = OR.begin(); it != OR.end(); it++) {
        if (*it == 'R') {
            if (it != (--OR.end())) {
                std::advance(it, 1);
                if (*it == 'O') {
                    tmpRO++;
                }
                else {
                    std::advance(it, -1);
                    setCounter(tmpRO, counterRO);
                }
            }
        }
        else {
            setCounter(tmpRO, counterRO);
        }
    }
    setCounter(tmpRO, counterRO);
    std::cout << "Najdluzszy ciag RO to: " << 2 * counterRO << "char" << std::endl;
}

void CoinToss::printLongestOR()
{
    int counterOR = 0;
    int tmpOR = 0;
    for (auto it = OR.begin(); it != OR.end(); it++) {
        if (*it == 'O') {
            if (it != (--OR.end())) {
                std::advance(it, 1);
                if (*it == 'R') {
                    tmpOR++;
                }
                else {
                    std::advance(it, -1);
                    setCounter(tmpOR, counterOR);
                }
            }
        }
        else {
            setCounter(tmpOR, counterOR);
        }
    }
    setCounter(tmpOR, counterOR);
    std::cout << "Najdluzszy ciag OR to: " << 2 * counterOR << "char"<<  std::endl;
}

void CoinToss::printLongestSequence(){
    printLongestOR();
    printLongestRO();
}