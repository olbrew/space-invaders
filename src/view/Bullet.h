#ifndef BULLET_SFML_H
#define BULLET_SFML_H

#include "../model/Bullet.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>
#include <memory>

namespace tysfml {
class Bullet : public ty::Bullet {
public:
    Bullet(const std::shared_ptr<Entity>);
    const sf::Sprite& getSprite() const;

private:
    void loadTexture();

    sf::Texture _texture;
    sf::Sprite _sprite;
};
} /* namespace tysfml */

#endif
