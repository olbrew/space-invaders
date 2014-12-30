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
    void Window::show()
    {
        // TODO move code into Plotter class
        sf::Texture bgTile;
        try
        {
            if (!bgTile.loadFromFile("../resources/img/shapesz.png",
                                     sf::IntRect(71, 84, 48, 27)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
        bgTile.setRepeated(true);
        sf::Sprite bgSprite;
        bgSprite.setTexture(bgTile);
        bgSprite.setTextureRect(sf::IntRect(0, 0, 800, 600));

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
            // draw entities
            _window.draw(bgSprite);
            _window.display();
        }
    }
} /* namespace tysfml */
