/**
 * @file
 *		Sets up the menu.
 * @author
 *		Olivier Brewaeys
 *
 * Loads background image and sets instruction text for the menu.
 */
#include "Menu.h"

namespace tysfml
{
    Menu::Menu()
    {
        loadTexture();
        _sprite.setTexture(_texture);

        loadFont();
        _text.setFont(_font);
        _text.setString("Press Enter to Play");
        _text.setCharacterSize(26);
        _text.setColor(sf::Color::White);
        _text.setPosition(60, 0);
        _text.setStyle(sf::Text::Bold);
    }

    void Menu::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/menu.gif"))
            {
                throw std::runtime_error("Could not load menu texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    void Menu::loadFont()
    {
        try
        {
            if (!_font.loadFromFile("../resources/fonts/HelveticaNeue.dfont"))
            {
                throw std::runtime_error("Could not load font from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    const sf::Sprite& Menu::getSprite() const
    {
        return _sprite;
    }

    const sf::Text& Menu::getText() const
    {
        return _text;
    }
} /* namespace tysfml */
