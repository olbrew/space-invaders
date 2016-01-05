#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

#include <random>

/*
 * Singleton class:
 * For desgin considerations see:
 * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */
class RandomGenerator {
public:
    static RandomGenerator& getRandomGenerator()
    {
        static RandomGenerator instance;
        return instance;
    }

    unsigned int getRandomNumber(unsigned int max = 640) const;

private:
    RandomGenerator(){};
    RandomGenerator(const RandomGenerator&) = delete;
    RandomGenerator& operator=(const RandomGenerator&) = delete;
};

#endif
