/**
 * @file
 *      Singleton RandomGenerator class for generating random numbers
 * @author
 *      Olivier Brewaeys
 *
 * This class is a singleton, see the header file for precise implementation.
 */

#ifndef RANDOMGENERATOR_H_
#define RANDOMGENERATOR_H_

#include <random>

/*
 * Singleton class:
 * For desgin considerations see:
 * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */
class RandomGenerator {
public:
    /**
     * Returns the (single!) RandomGenerator object
     *
     * @return   The Randomgenerator object
     */
    static RandomGenerator& getRandomGenerator()
    {
        static RandomGenerator instance;
        return instance;
    }

    /**
     * Returns a new random number between 0 and max
     *
     * @param    max      The random number will be generated between 0 and this
     * value
     *
     * @return   the random number
     */
    unsigned int getRandomNumber(unsigned int max) const;

private:
    RandomGenerator(){};
    RandomGenerator(const RandomGenerator&) = delete;
    RandomGenerator& operator=(const RandomGenerator&) = delete;
};

#endif
