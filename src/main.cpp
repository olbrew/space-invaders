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
    Game game;
    game.run();

    return 0;
}
