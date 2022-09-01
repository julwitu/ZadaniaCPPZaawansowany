//Stworz listê 50 liczb ca³kowitych dodatnich i wype³nij j¹ losowymi wartoœciami.Wypisz j¹.
//Nastêpnie posortuj i wypisz listê tak, by na pocz¹tku znalaz³y siê wartoœci parzyste uporz¹dkowane rosn¹co, a za nimi wartoœci nieparzyste uporz¹dkowane malej¹co.
//Podpowiedz: Podziel listê na dwie osobne, odpowiednio posortuj, a nastêpnie ja po³¹cz w jedn¹.
#include <iostream>
#include <list>
#include <algorithm>
#include <random>
int randomIntGenerator() {
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution<int> dist(0, 1000);
    return dist(randomEngine);
}
bool isEven(int number) {
    if (number % 2 == 0) 
        return true;
    else 
        return false;
}
bool isOdd(int number) {
    return !isEven(number);
}
int main() {
    std::list<int> intList;
    for (size_t i = 0; i < 50; i++) {
        intList.emplace_back(randomIntGenerator());
    }
    std::for_each(intList.begin(), intList.end(), [](int i) {std::cout << i << " "; });

    std::list <int> evenNumbers;
    std::copy_if(intList.begin(), intList.end(), std::back_inserter(evenNumbers), isEven);
    evenNumbers.sort();
    std::cout << std::endl << "****************Liczby parzyste**********" << std::endl;
    std::for_each(evenNumbers.begin(), evenNumbers.end(), [](int i) {std::cout << i << " "; });

    std::list<int>oddNumbers;
    std::copy_if(intList.begin(), intList.end(), std::back_inserter(oddNumbers), isOdd);
    std::cout << std::endl << "****************Liczby nieparzyste**********" << std::endl;
    oddNumbers.sort(std::greater<int>());
    std::for_each(oddNumbers.begin(), oddNumbers.end(), [](int i) {std::cout << i << " "; });

    intList.clear();
    // evenNumbers.merge(oddNumbers); ?????
    std::copy(evenNumbers.begin(), evenNumbers.end(), std::back_inserter(intList));
    std::copy(oddNumbers.begin(), oddNumbers.end(), std::back_inserter(intList));
    std::cout << std::endl << "*********************final****************" << std::endl;
    std::for_each(intList.begin(), intList.end(), [](int i) {std::cout << i << " "; });
}