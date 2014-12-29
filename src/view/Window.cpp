#include "Window.h"

Window::Window(): _window(sf::VideoMode(800, 600), "Tyrian") {}

Window::~Window() { _window.close(); }

void Window::show()
{
    // main drawing loop
    while (_window.isOpen())
    {
        sf::Event event;
        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _window.close();
        }
        _window.clear(sf::Color::White);
        _window.display();
    }
}
