/**
 * @file
 *		SFML class for an EnemyShip.
 * @author
 *		Olivier Brewaeys
 *
 *  This class sets up a SFML sprite for an enemyship.
 */

#include "EnemyShip.h"

namespace tysfml {
    /**
     * Enemyship ctor.
     */
    EnemyShip::EnemyShip()
    {
        loadTexture();
        _sprite.setTexture(_texture);
        _sprite.setPosition(_pos._x * 10, _pos._y * 10);
    }

    /**
     * Load the enemyship texture from file.
     */
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

    /**
     * Return enemyship sprite.
     * @return   The sprite of the enemyship.
     */
    const sf::Sprite& EnemyShip::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
