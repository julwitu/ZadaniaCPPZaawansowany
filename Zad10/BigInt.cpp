#include "BigInt.h"
#include <algorithm>
#include <iostream>


BigInt::BigInt(long long number)
{
	do {
		numbers.push_back(number % 10);
		number /= 10;
	} while (number);
}

BigInt::BigInt(const BigInt& other)
{
	this->numbers = other.numbers;
}

BigInt& BigInt::operator=(const BigInt& other)
{
	if (this != &other) {
		this->numbers = other.numbers;
	}
	return *this;
}
void BigInt::toString()
{
	std::for_each(numbers.begin(), numbers.end(), [](int i) {std::cout << i; });
}

BigInt& BigInt::operator+(const BigInt & bigInt)
{
	int findBigger = std::max(bigInt.numbers.size(), numbers.size());
	for(int i=findBigger; i >0; i--){
		if (numbers[i] + bigInt.numbers[i] < 10) {
			numbers[i] += bigInt.numbers[i];
		}
		else {
			numbers[i] = (numbers[i] + bigInt.numbers[i]) % 10;
			numbers[i - 1] += (numbers[i] + bigInt.numbers[i]) % 10;
		}
	}
	std::reverse(numbers.begin(), numbers.end());
	return *this;
}


BigInt::BigInt() : numbers(0)
{
}