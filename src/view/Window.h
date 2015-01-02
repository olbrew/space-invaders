#ifndef WINDOW_H_
#define WINDOW_H_

#include "TextureLoader.h"
#include "../model/World.h"
#include <SFML/Graphics.hpp>
#include <memory>
#include <stack>

namespace tysfml
{
    class Window
    {
    public:
        Window(std::shared_ptr<ty::World>);
        ~Window();
        void draw();
        void createSprite();
        void loadTexture();
    private:
        std::shared_ptr<ty::World> _world;
        sf::RenderWindow _window;
        std::stack<sf::Texture> _textures;
        std::stack<sf::Sprite> _sprites;
    };
} /* namespace tysfml */

#endif
