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
