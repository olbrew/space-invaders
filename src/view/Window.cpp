/**
 * @file
 *      Holds the SFML window and draws on it.
 * @author
 *      Olivier Brewaeys
 */

#include "Window.h"

namespace tysfml
{
    /**
     * Window ctor.
     * Sets up SFML Window.
     */
    Window::Window(): _menu(std::make_shared<Menu>()),
        _window(std::make_shared<sf::RenderWindow>(sf::VideoMode(320, 240),
                "Tyrian", sf::Style::Titlebar | sf::Style::Close)) {}

    /**
     * Window dtor.
     * Properly closes SFML Window and it's resources.
     */
    Window::~Window()
    {
        _window->close();
    }

    /**
     * Returns a pointer to the actual SFML window.
     * @return   the SFML window.
     */
    std::shared_ptr<sf::RenderWindow> Window::get()
    {
        return _window;
    }

    /**
     * Draws the menu on the SFML window.
     */
    void Window::drawMenu()
    {
        _window->draw(_menu->getSprite());
        _window->draw(_menu->getText());
    }

    void Window::setupWorld()
    {
        _sfmlEntities.push_back(std::make_shared<BGTile>());
        _sfmlEntities.push_back(std::make_shared<PlayerShip>());
        _sfmlEntities.push_back(std::make_shared<EnemyShip>());
    }

    /**
     * Draws the entities of the world, and thus the world itself
     * on the SFML window.
     */
    void Window::drawWorld()
    {
        for (auto ent : _sfmlEntities)
            _window->draw(ent->getSprite());
    }
} /* namespace tysfml */
