/**
 * @file
 *      Sets up the menu.
 * @author
 *      Olivier Brewaeys
 *
 * Loads background image and sets instruction text for the menu.
 */
#include "Menu.h"

namespace tysfml {
Menu::Menu(std::shared_ptr<Window> window)
{
    loadTexture();
    _sprite.setTexture(_texture);

    loadFont();
    sf::Text text;
    text.setFont(_font);
    text.setString("Press Enter to Play");
    text.setCharacterSize(15);
    text.setColor(sf::Color::Yellow);
    text.setPosition(80, 220);

    _window = window;
}

void Menu::loadTexture()
{
    try {
        if (!_texture.loadFromFile("../resources/img/menu.gif")) {
            throw std::runtime_error("Could not load menu texture from file");
        }
    }
    catch (std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
}

void Menu::loadFont()
{
    try {
        if (!_font.loadFromFile("../resources/fonts/HelveticaNeue.dfont")) {
            throw std::runtime_error("Could not load font from file");
        }
    }
    catch (std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
}

void Menu::draw()
{
    _window->getWindow()->draw(_sprite);
    _window->getWindow()->draw(_text);
}

} /* namespace tysfml */
