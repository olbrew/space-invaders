#ifndef BGTILE_H
#define BGTILE_H

#include "../model/BGTile.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml {
    class BGTile: public ty::BGTile
    {
    public:
        BGTile();
        void loadTexture();
    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
    };
} /* namespace tysfml */

#endif
