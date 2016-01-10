#include "RandomGenerator.h"

unsigned int RandomGenerator::getRandomNumber(unsigned int max) const
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, max);

    return dist(gen);
}
