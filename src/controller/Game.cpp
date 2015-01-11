/**
 * @file
 *      Main controller which runs the game loop.
 * @author
 *      Olivier Brewaeys
 *
 * Every level can be seen as one game and its corresponding world.
 * This class also holds the game state, like the elapsed time and
 * delegates user requests to the model and updates the view.
 * It is the main controller function and runs the main/game loop.
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
    Game::Game(): _paused(true), _window(std::make_shared<tysfml::Window>()) {}

    /**
     * Starts the game and the game timer.
     * Contains the logic for running through the menus.
     */
    void Game::start()
    {
        tysfml::Stopwatch::getStopwatch();
        while (_window->get()->isOpen())
        {
            sf::Event event;
            while (_window->get()->pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    _window->get()->close();
                if (event.type == sf::Event::LostFocus)
                    _paused = true;
                if (event.type == sf::Event::KeyPressed)
                    if ((event.key.code == sf::Keyboard::Return) && _paused)
                        playDefaultLevel();
                    if (!_paused)
                        if ((event.key.code == sf::Keyboard::Escape) && !_paused)
                            _paused = true;
                        //if (event.key.code == sf::Keyboard::Left)
            }
            _window->get()->clear();
            if (_paused)
                _window->drawMenu();
            else
                _window->drawWorld();
            _window->get()->display();
        }
    }

    /**
     * Plays the default level.
     * Makes a world, pushes it to the levels queue and declares the game
     * running.
     */
    void Game::playDefaultLevel()
    {
        std::shared_ptr<World> defaultLevel = std::make_shared<World>();
        _window->setupWorld();
        _levels.push(defaultLevel);
        _paused = false;
    }
} /* namespace ty */
