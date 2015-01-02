#include "Window.h"

namespace tysfml
{
    /**
     * Window ctor.
     * Sets up SFML Window.
     */
    Window::Window(): _window(sf::VideoMode(800, 600), "Tyrian") {}

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
        // main loop
        while (_window.isOpen())
        {
            sf::Event event;
            while (_window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    _window.close();
            }
            _window.clear(sf::Color::White);
            // draw sprites
            createSprite();
            _window.draw(_sprites.top());

            _window.display();
        }
    }

    void Window::createSprite()
    {
        // bgSprite
        sf::Sprite bgSprite;

        loadTexture();
        bgSprite.setTexture(_textures.top());
        bgSprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
        _sprites.push(bgSprite);
    }

    void Window::loadTexture()
    {
        sf::Texture bgTexture;
        TextureLoader loader;
        loader.getBgTexture(bgTexture);

        _textures.push(bgTexture);
    }

} /* namespace tysfml */
