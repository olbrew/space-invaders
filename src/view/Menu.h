#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml
{
    class Menu
    {
    public:
        Menu();
        const sf::Sprite& getSprite() const;
        const sf::Text& getText() const;
    private:
        void loadTexture();
        void loadFont();

        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Font _font;
        sf::Text _text;
    };
} /* namespace tysfml */
#endif
