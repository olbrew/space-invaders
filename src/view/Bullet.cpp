/**
 * @file
 *		SFML class for a bullet.
 * @author
 *		Olivier Brewaeys
 *
 * This class sets up a SFML sprite for a bullet.
 */

#include "Bullet.h"

namespace tysfml {
    /**
     * Bullet SFML ctor.
     * Sets up sprite and texture of the bullet as members,
     * because they must each live as long the bullet exists.
     */
    Bullet::Bullet(const std::shared_ptr<Entity> ship): ty::Bullet(ship)
    {
        loadTexture();
        _sprite.setTexture(_texture);
        // world is modeled on a 32x24 size.
        const util::Position pos = ship->getPos();
        _sprite.setPosition(pos._x * 10, pos._y * 10);
    }

    /**
     * Load the bullet texture from its file.
     */
    void Bullet::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/bullets.png",
                                        sf::IntRect(3, 42, 5, 8)))
            {
                throw std::runtime_error("Could not load bullet texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    /**
     * Return bullet sprite.
     * @return   The sprite of the bullet.
     */
    const sf::Sprite& Bullet::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
