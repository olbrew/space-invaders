#include "EnemyShip.h"

namespace tysfml {
    EnemyShip::EnemyShip()
    {
        loadTexture();
        _sprite.setTexture(_texture);
        _sprite.setPosition(_pos._x, _pos._y);
    }

    void EnemyShip::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/enemyships.png",
                                        sf::IntRect(4, 140, 15, 20)))
            {
                throw std::runtime_error("Could not load PlayerShip texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    const sf::Sprite& EnemyShip::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
