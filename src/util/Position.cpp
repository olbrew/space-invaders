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
     * Default ctor for Position, initalises on {0, 0}
     */
    Position::Position(): _x(0), _y(0) {}

    /**
     * Initialise position on given x, y coordinates
     * @param     x     x-coordinate
     * @param     y     y-coordinate
     */
    Position::Position(const unsigned int x, const unsigned int y): _x(x), _y(y) {}

    /**
     * Initalizer list ctor.
     * Asserts that the listsize must be 2, because we work in a 2D world.
     * Then we can use the begin() and end() members of the initalizer
     * list to set the x- and y-coordinate.
     *
     * @param    l      the initializer list.
     */
    Position::Position(std::initializer_list<unsigned int> l)
    {
           assert(l.size() == 2);

           _x = *(l.begin());
           // some fancy pointer arithmetic
           _y = *(l.end() - 1);
    }
}
