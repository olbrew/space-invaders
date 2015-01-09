#ifndef BGTILE_SFML_H
#define BGTILE_SFML_H

#include "../model/BGTile.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml {
    class BGTile: public ty::BGTile
    {
    public:
        BGTile();
        const sf::Sprite& getSprite() const;
    private:
        void loadTexture();

        sf::Texture _texture;
        sf::Sprite _sprite;
    };
} /* namespace tysfml */

#endif
