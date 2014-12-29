/**
 * @file
 *      Small position class which keeps an x- and y-coordinate.
 * @author
 *      Olivier Brewaeys
 */

#include "Position.h"

namespace util
{
    /**
     * Default ctor.
     */
    Position::Position(): _x(0), _y(0) {}

    /**
     * Initialise position on given x, y coordinates
     * @param     x     x-coordinate
     * @param     y     y-coordinate
     */
    Position::Position(const unsigned int x, const unsigned int y): _x(x), _y(y) {}
}
