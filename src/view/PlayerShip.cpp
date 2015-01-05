#include "PlayerShip.h"

namespace tysfml {
    PlayerShip::PlayerShip()
    {
        loadTexture();
        _sprite.setTexture(_texture);
        _sprite.setPosition(_pos._x, _pos._y);
    }

    void PlayerShip::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/playership.png",
                                        sf::IntRect(49, 140, 21, 17)))
            {
                throw std::runtime_error("Could not load PlayerShip texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    const sf::Sprite& PlayerShip::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
