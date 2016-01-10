/**
 * @file
 *      Singleton Keyboard class for processing keyboard input.
 * @author
 *      Olivier Brewaeys
 *
 * This class is a singleton, see the header file for precise implementation.
 * It  has only one function: it processes keyboard input and returns a number
 * according to its input.
 *
 * It does not directly operate on the world to preserve encapsulation.
 */

#include "Keyboard.h"

namespace si {
namespace controller {

    int Keyboard::processKeys(sf::Event& event) const
    {
        switch (event.key.code) {
        case sf::Keyboard::Left:
            return 0;
            break;
        case sf::Keyboard::Right:
            return 1;
            break;
        case sf::Keyboard::Space:
            return 2;
            break;
        default:
            return -1;
        }
    }

} /* namespace controller */
} /* namespace si */
