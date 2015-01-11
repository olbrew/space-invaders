#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <SFML/System.hpp>

namespace tysfml
{
    class Stopwatch
    {
    // For design considerations see:
    // https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
    public:
        static Stopwatch& getStopwatch()
        {
            static Stopwatch instance;
            return instance;
        }
        unsigned long int elapsedSeconds() const;
        unsigned long int elapsedMilliSeconds() const;
    private:
        Stopwatch() {};
        Stopwatch(const Stopwatch&);
        Stopwatch& operator=(const Stopwatch&);

        static sf::Clock _clock;
    };
} /* namespace tysfml */

#endif
