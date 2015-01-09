/**
 * @file
 *		SFML class for a PlayerShip.
 * @author
 *		Olivier Brewaeys
 *
 *  This class sets up a SFML sprite for a playership.
 */

#include "PlayerShip.h"

namespace tysfml {
    /**
     * PlayerShip SFML ctor.
     * Sets up sprite and texture of the ship as members,
     * because they must each live as long the ship exists.
     */
    PlayerShip::PlayerShip()
    {
        loadTexture();
        _sprite.setTexture(_texture);
        // world is modeled on a 32x24 size.
        _sprite.setPosition(_pos._x * 10, _pos._y * 10);
    }

    /**
     * Load the playership texture from its file.
     */
    void PlayerShip::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/playership.png",
                                        sf::IntRect(49, 140, 21, 27)))
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
     * Return playership sprite.
     * @return   The sprite of the playership.
     */
    const sf::Sprite& PlayerShip::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
