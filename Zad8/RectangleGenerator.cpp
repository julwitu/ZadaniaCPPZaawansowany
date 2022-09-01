#include "RectangleGenerator.h"
#include <random>

int RectangleGenerator::randomNumbersGenerator()
{
        std::random_device randomDevice;
        std::default_random_engine randomEngine(randomDevice());
        std::uniform_int_distribution<int> dist(0, 10);
        return dist(randomEngine);
}

RectangleGenerator::RectangleGenerator()
{
    a = randomNumbersGenerator();
    b = randomNumbersGenerator();
}
