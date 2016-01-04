#ifndef PLAYERSHIP_SFML_H
#define PLAYERSHIP_SFML_H

#include "../model/PlayerShip.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml {
class PlayerShip : public ty::PlayerShip {
public:
    PlayerShip();
    const sf::Sprite& getSprite() const;

private:
    void loadTexture();

    sf::Texture _texture;
    sf::Sprite _sprite;
};
} /* namespace tysfml */

#endif
