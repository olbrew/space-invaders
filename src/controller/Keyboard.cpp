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

int Keyboard::processKeys(sf::Event& event) const
{
    switch (event.key.code) {
        case sf::Keyboard::Return:
            return 1;
            break;
        case sf::Keyboard::Escape:
            return 2;
            break;
        case sf::Keyboard::Left:
            return 3;
            break;
        case sf::Keyboard::Right:
            return 4;
            break;
        case sf::Keyboard::Up:
            return 5;
            break;
        case sf::Keyboard::Down:
            return 6;
            break;
        case sf::Keyboard::Space:
            return 7;
            break;
        case sf::Keyboard::A:
            return 8;
            break;
        case sf::Keyboard::D:
            return 9;
            break;
        case sf::Keyboard::W:
            return 10;
            break;
        default:
            std::cerr << "Invalid keyboard input" << std::endl;
    }
}
