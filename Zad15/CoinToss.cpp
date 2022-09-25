#include "CoinToss.h"
#include <random>
#include <iostream>
#include <algorithm>
#include <iomanip>

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
    double PercO = static_cast<double>(counterO*100) / OR.size();
    double PercR = static_cast<double>(counterR*100) / OR.size();
    std::cout << std::setprecision(4);
    std::cout << "Liczba O: " << PercO  << "%" << std::endl;
    std::cout << "Liczba R: " << PercR << "%" << std::endl;
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
            setCounter(tmp, counter);
        }
    }
    setCounter(tmp, counter);
    int index = findIndex(OR, counter, 'O');
    std::cout << "Najdluzszy ciag O to: " << counter << " char -> index[" << index << "]" << std::endl;
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
            setCounter(tmp, counter);
        }
    }
    setCounter(tmp, counter);
    int index = findIndex(OR, counter, 'R');
    std::cout << "Najdluzszy ciag R to: " << counter << " char -> index[" << index << "]" << std::endl;
}

void CoinToss::setCounter(int& tmp, int& counter)
{
    if (tmp > counter) {
        counter = tmp;
    }
    tmp = 0;
}
int CoinToss::findIndex(std::vector<char> vct, int counter, char c) {
    std::string str;
    std::copy(vct.begin(), vct.end(), std::back_inserter(str));
    std::string longest = std::string(counter, c);
    int index = str.find(longest);
    return index;
}
int CoinToss::findIndex(std::vector<char> vct, int counter, char c1, char c2)
{
    std::string str;
    std::copy(vct.begin(), vct.end(), std::back_inserter(str));
    std::string longest;
    for (int i = 0; i < 2 * counter; i++) {
        if (i % 2 == 0) {
            longest.push_back(c1);
        }
        else {
            longest.push_back(c2);
        }
    }
    int index = str.find(longest);
    return index;
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
    int index = findIndex(OR, counterRO, 'R', 'O');
    std::cout << "Najdluzszy ciag RO to: " << 2 * counterRO << "char -> index[" << index<< "]" << std::endl;
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
    int index = findIndex(OR, counterOR, 'O', 'R');
    std::cout << "Najdluzszy ciag OR to: " << 2 * counterOR << "char -> index["<< index << "]"<<  std::endl;
}

void CoinToss::printLongestSequence(){
    printLongestOR();
    printLongestRO();
}