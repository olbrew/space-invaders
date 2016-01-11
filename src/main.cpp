/**
 * @file    Setup and start a game.
 *
 * @author
 *      Olivier Brewaeys
 *
 *  This file contains the main function wich setups a game and start it.
 *  Currently only a SFML view and SFML Keyboard controller are supported.
 */

#include "controller/SFMLGame.h"

/**
 * main function, creates a game and starts it.
 *
 * @return  exit code
 */
int main()
{
    si::controller::SFMLGame game;
    game.run();

    return 0;
}
