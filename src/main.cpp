/**
 * @file
 *      main function, makes and executes the game.
 * @author
 *      Olivier Brewaeys
 */

#include "controller/Game.h"
#include "model/World.h"
#include <memory>

/**
 * main function, makes and executes the game
 * @return  exit code
 */
int main()
{
    std::shared_ptr<ty::World> world(new ty::World);
    ty::Game game(world);


    return 0;
}
