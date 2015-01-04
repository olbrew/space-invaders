/**
 * @file
 *      main function, makes and executes the game.
 * @author
 *      Olivier Brewaeys
 */

#include "controller/Game.h"

/**
 * main function, creates a game and starts it.
 * @return  exit code
 */
int main()
{
    ty::Game game;
    game.start();

    return 0;
}
