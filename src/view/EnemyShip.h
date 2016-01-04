#ifndef ENEMYSHIP_SFML_H
#define ENEMYSHIP_SFML_H

#include "../model/EnemyShip.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml {
class EnemyShip : public ty::EnemyShip {
public:
    EnemyShip();
    void loadTexture();
    const sf::Sprite& getSprite() const;

private:
    sf::Texture _texture;
    sf::Sprite _sprite;
};
} /* namespace tysfml */

#endif
