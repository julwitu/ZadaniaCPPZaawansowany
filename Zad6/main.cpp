#include <iostream>
#include <list>
#include <algorithm>
//Zadanie 6
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
bool isPrimeNumber(unsigned int number) {
	bool isPrime = false;
	if (number >1){
		for (int i = 2; i <= number/2; i++) {
			if (number % i != 0) {
				isPrime = true;
			}
			else {
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}
bool isNotPrime(unsigned int number) {
	return !isPrimeNumber(number);
}

int main() {
	std::list<int> allNumbers;
	for (int i = 1; i <= 1000; i++) {
		allNumbers.emplace_back(i);
	}
	std::list<int> primeNumbers;
	std::list<int> notPrimeNumbers;
	std::copy_if(allNumbers.begin(), allNumbers.end(), std::back_inserter(primeNumbers), isPrimeNumber);
	std::copy_if(allNumbers.begin(), allNumbers.end(), std::back_inserter(notPrimeNumbers), isNotPrime);

	std::for_each(primeNumbers.begin(), primeNumbers.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl<< "***************not prime numbers" << std::endl;
	std::for_each(notPrimeNumbers.begin(), notPrimeNumbers.end(), [](int i) {std::cout << i << " "; });
}