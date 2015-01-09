#include "Window.h"

namespace tysfml
{
    /**
     * Window ctor.
     * Sets up SFML Window.
     */
    Window::Window(): _window(sf::VideoMode(320, 240), "Tyrian",
                                  sf::Style::Titlebar | sf::Style::Close) {}

    /**
     * Window dtor.
     * Properly closes SFML Window and it's resources.
     */
    Window::~Window()
    {
        _window.close();
    }

    /**
     * Draws the window and contains the main loop.
     * All the actual drawing of the entitites by SFML
     * happens in this function. In the main or game loop
     * between the window clear and display function,
     * all our entities get drawn.
     */
    void Window::draw()
    {
        BGTile bgTile;
        PlayerShip ps;
        EnemyShip es;
        // main loop
        while (_window.isOpen())
        {
            sf::Event event;
            while (_window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    _window.close();
            }
            _window.clear();
            // draw sprites
            _window.draw(bgTile.getSprite());
            _window.draw(ps.getSprite());
            _window.draw(es.getSprite());

            _window.display();
        }
    }

} /* namespace tysfml */
