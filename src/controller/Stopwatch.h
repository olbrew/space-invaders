#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <SFML/System.hpp>

/*
 * Singleton class:
 * For desgin considerations see:
 * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */
class Stopwatch {
public:
    static Stopwatch& getStopwatch()
    {
        static Stopwatch instance;
        return instance;
    }
    unsigned long int elapsedSeconds() const;
    unsigned long int elapsedMilliSeconds() const;

private:
    Stopwatch(){};
    Stopwatch(const Stopwatch&) = delete;
    Stopwatch& operator=(const Stopwatch&) = delete;

    static sf::Clock _clock;
};

#endif
