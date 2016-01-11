#include "Stopwatch.h"

namespace si {
namespace controller {

    unsigned long int Stopwatch::elapsedMilliSeconds() const
    {
        sf::Time elapsed = clock_.restart();
        return elapsed.asMilliseconds();
    }

} /* namespace controller */
} /* namespace si */
