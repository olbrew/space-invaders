/**
 * @file
 *      Singleton RandomGenerator class for generating random numbers
 * @author
 *      Olivier Brewaeys
 *
 * This class is a singleton, see the header file for precise implementation.
 */

#include "RandomGenerator.h"

unsigned int RandomGenerator::getRandomNumber(unsigned int max) const
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(0, max);

    return dist(gen);
}
