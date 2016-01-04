/**
 * @file
 *      Wrapper class for SFML Window, only one window is necessary.
 * @author
 *      Olivier Brewaeys
 */

#include "Window.h"

namespace tysfml {
/**
 * Window ctor.
 * Sets up SFML Window.
 */
Window::Window()
    : _window(std::make_shared<sf::RenderWindow>(sf::VideoMode(320, 240),
          "Tyrian", sf::Style::Titlebar | sf::Style::Close))
{
}

/**
 * Window dtor.
 * Properly closes SFML Window and it's resources.
 */
Window::~Window() { _window->close(); }

std::shared_ptr<sf::RenderWindow> Window::get() { return _window; }

} /* namespace tysfml */
