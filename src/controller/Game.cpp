/**
 * @file
 *      Contains pointer to one world and holds the game state.
 * @author
 *      Olivier Brewaeys
 *
 * Every level can be seen as one game and its corresponding world.
 * This class also holds the game state, like the elapsed time and
 * delegates user requests to the model and updates the view.
 */

#include "Game.h"

namespace ty
{
    /**
     * Creates a game with a world object and a drawer of the world.
     * Game consists of levels, and a pointer to a default
     * level is pushed onto the levels queue.
     * There is also a window created for
     */
    Game::Game()
    {
    }

    /**
     * Starts the game.
     */
    void Game::start()
    {
        playDefaultLevel();
    }

    /**
     * Plays the default level.
     */
    void Game::playDefaultLevel()
    {
        std::shared_ptr<World> defaultLevel = std::make_shared<World>();
        _levels.push(defaultLevel);
        _window = std::make_shared<tysfml::Window>();
        _window->draw();
    }

} /* namespace ty */
