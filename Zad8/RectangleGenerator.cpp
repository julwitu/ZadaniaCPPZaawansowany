#include "RectangleGenerator.h"
#include <random>

RectangleGenerator::RectangleGenerator(int min, int max):
	_min(min),
	_max(max)
{

}

Rectangle RectangleGenerator::generate()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution<int> dist(_min, _max);
    return Rectangle(dist(randomEngine), dist(randomEngine));
}
