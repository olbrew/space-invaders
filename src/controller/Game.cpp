/**
 * @file
 *		Contains pointer to one world and holds the game state.
 * @author
 *		Olivier Brewaeys
 *
 * Every level can be seen as one game and its corresponding world.
 * This class also holds the game state, like the elapsed time and
 * delegates user requests to the model and updates the view.
 */

#include "Game.h"

namespace ty {
    Game::Game(std::shared_ptr<World> world): _world(world)
    {
        tysfml::Window window(world);
        window.draw();
    }

} /* namespace ty */
