/**
 * @file
 *      Singleton Stopwatch class for keeping time.
 * @author
 *      Olivier Brewaeys
 *
 * This singleton time keeping class is used to execute the game loop at a fixed
 * interval so that this game can run at the same rate on different platforms.
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <SFML/System/Clock.hpp>

namespace si {
namespace controller {

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

        static sf::Clock clock_;
    };

} /* namespace controller */
} /* namespace si */
#endif
