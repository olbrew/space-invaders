/**
 * @file
 *      Singleton Stopwatch class for holding global time.
 * @author
 *      Olivier Brewaeys
 *
 * This class is a singleton, see the header file for precise implementation.
 * It holds a global time in milliseconds for updating our screen on the same
 * tempo on any platform. It is also used to count the seconds elapsed per
 * level, to keep a score and determine when new enemyships must be created.
 */

#include "Stopwatch.h"

namespace si {
namespace controller {

    unsigned long int Stopwatch::elapsedSeconds() const
    {
        sf::Time elapsed = clock_.getElapsedTime();
        return elapsed.asSeconds();
    }

    unsigned long int Stopwatch::elapsedMilliSeconds() const
    {
        sf::Time elapsed = clock_.getElapsedTime();
        return elapsed.asMilliseconds();
    }

} /* namespace controller */
} /* namespace si */
