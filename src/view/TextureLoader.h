#ifndef TEXTURELOADER_H
#define TEXTURELOADER_H

#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml
{
    class TextureLoader
    {
    public:
        void getBgTexture(sf::Texture&);
        void getPlayerShipTexture(sf::Texture&);
        void getEnemyShipTexture(sf::Texture&);
    };
} /* namespace tysfml */

#endif
