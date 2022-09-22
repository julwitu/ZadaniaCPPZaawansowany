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
// naprawic
void CoinToss::printLongestOR()
{
    int counterRO = 0;
    int tmpRO = 0;
    int counterOR = 0;
    int tmpOR = 0;
    for (auto it = OR.begin(); it != OR.end(); it + 2) {
        if (*it == 'R') {
            if (*(it++) == 'O' && it++ != OR.end()) {
                tmpRO++;
            }
            else {
                if (tmpRO > counterRO) {
                    counterRO = 2*tmpRO;
                    tmpRO = 0;
                }
            }
        }
        else {
            if (*(it++) == 'R' && it++!=OR.end()) {
                tmpOR++;;
            }
            else {
                if (tmpOR > counterOR) {
                    counterOR = 2*tmpOR;
                    tmpOR = 0;
                }
            }
        }
    }
    std::cout << counterRO << std::endl;
    std::cout << counterOR << std::endl;
}

