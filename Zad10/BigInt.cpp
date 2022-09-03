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

BigInt& BigInt::operator+(BigInt bigInt)
{
	std::reverse(numbers.begin(), numbers.end());
	std::reverse(bigInt.numbers.begin(), bigInt.numbers.end());
	int findBigger = std::max(bigInt.numbers.size(), numbers.size());
	std::vector<short int> temp;
	for (int i = 0; i < findBigger; i++) {
		
			if (numbers[i] + bigInt.numbers[i] < 10) {
				temp.push_back(numbers[i] + bigInt.numbers[i]);
			}
			else {
				temp.push_back((numbers[i] + bigInt.numbers[i]) % 10);
				temp.push_back((numbers[i] + bigInt.numbers[i]) / 10);
			}

	}
	numbers.clear();
	std::copy(temp.rbegin(), temp.rend(), std::back_inserter(numbers));
	return *this;
}


BigInt::BigInt() : numbers(0)
{
}