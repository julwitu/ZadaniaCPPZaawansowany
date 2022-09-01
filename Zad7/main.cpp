//Stworz list� 50 liczb ca�kowitych dodatnich i wype�nij j� losowymi warto�ciami.Wypisz j�.
//Nast�pnie posortuj i wypisz list� tak, by na pocz�tku znalaz�y si� warto�ci parzyste uporz�dkowane rosn�co, a za nimi warto�ci nieparzyste uporz�dkowane malej�co.
//Podpowiedz: Podziel list� na dwie osobne, odpowiednio posortuj, a nast�pnie ja po��cz w jedn�.
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