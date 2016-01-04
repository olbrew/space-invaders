#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>
#include <memory>
#include "Window.h"

namespace tysfml {
class Menu {
public:
    Menu(std::shared_ptr<Window>);

private:
    void loadTexture();
    void loadFont();
    void draw();

    sf::Texture _texture;
    sf::Sprite _sprite;
    sf::Font _font;
    sf::Text _text;
    std::shared_ptr<Window> _window;
};
} /* namespace tysfml */
#endif
