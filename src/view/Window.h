#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.hpp>
#include <stack>
#include "TextureLoader.h"

namespace tysfml
{
    class Window
    {
    public:
        Window();
        ~Window();
        void draw();
        void createSprite();
        void loadTexture();
    private:
        sf::RenderWindow _window;
        std::stack<sf::Texture> _textures;
        std::stack<sf::Sprite> _sprites;
    };
} /* namespace tysfml */

#endif
