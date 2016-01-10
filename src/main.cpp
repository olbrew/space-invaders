/**
 * @file
 *      Start a game with different views and/or controllers.
 *      Currently only possible with a SFML view and SFML Keyboard controller.
 *
 * @author
 *      Olivier Brewaeys
 */

#include "controller/SFMLGame.h"
#include <iostream>
#include <stdexcept>

/**
 * main function, creates a game and starts it.
 *
 * @return  exit code
 */
int main()
{
    try {
        si::controller::SFMLGame game;
        game.run();
        return 0;
    }
    catch (std::runtime_error& e) {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return 1;
    }
}
