#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.hpp>

class Window
{
public:
    Window();
    ~Window();
    void show();
private:
    sf::RenderWindow _window;
};

#endif
