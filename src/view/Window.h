#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.hpp>
// temporary, until code is moved to Plotter class
#include <iostream>

namespace tysfml
{
    class Window
    {
    public:
        Window();
        ~Window();
        void show();
    private:
        sf::RenderWindow _window;
    };
} /* namespace tysfml */

#endif
