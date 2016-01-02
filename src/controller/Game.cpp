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

/**
 * Creates a game with a world object and a drawer of the world.
 * Game consists of levels, and a pointer to a default
 * level is pushed onto the levels queue.
 * There is also a window created for
 */
Game::Game(): _paused(true), _running(true), _window(std::make_shared<tysfml::Window>()) {
    setup();
}

/**
 * Starts the game and the game timer.
 * Contains the logic for running through the menus.
 */
void Game::setup()
{
    // init everything
    _window.setup();

    // run
    std::shared_ptr<sf::RenderWindow> window = _window->getWindow();
    while (window->isOpen())
    {
        pollEvents();
        window->clear();
        if (_paused)
            _window->drawMenu();
        else
            _window->drawWorld();
        _window->get()->display();
    }
}

/**
 * Runs the game, main loop
 */
void Game::run()
{
    while (_running)
    {
        pollEvents();
        update();
    }
}

/**
 * Polls for user input events on the window
 */
void Game::pollEvents()
{
    sf::Event event;
    while (_window->get()->pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            _window->get()->close();
            break;
        case sf::Event::LostFocus:
            pause();
            break;
        case sf::Event::KeyPressed:
            processInput(event);
            break;
        default:
            std::cerr << "Invalid event type" << std::endl;
            break;
        }
    }
}

void Game::processInput(sf::Event& event)
{
    if (_paused)
    {
        if (event.key.code == sf::Keyboard::Return)
            resume();
    }
    else
    {
        switch (Keyboard::getKeyboard().processKeys(event))
        {
        case 2:
            // escape
            pause();
            break;
        case 3:
            // left arrow
            _world.leftP1();
            break;
        case 4:
            // right arrow
            _world.rightP1()
            break;
        case 5:
            // up arrow
            _world.speedup();
            break;
        case 6:
            // down arrow
            _world.slowdown();
            break;
        case 7:
            // space
            _world.shootP1();
            break;
        case 8:
            // A
            _world.leftP2();
            break;
        case 9:
            // D
            _world.rightP2();
            break;
        case 10:
            // W
            _world.shootP2();
            break;
        }
    }
}

/**
 * Plays the default level.
 * Makes a world, pushes it to the levels queue and declares the game
 * running.
 */
void Game::playDefaultLevel()
{
    std::shared_ptr<ty::World> defaultLevel = std::make_shared<ty::World>();
    _window->setupWorld();
    //_levels.push(defaultLevel);
    _paused = false;
}


void Game::resume()
{
    _paused = false;
    playDefaultLevel();
}

void Game::pause()
{
    _paused = true;
}
