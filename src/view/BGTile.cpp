#include "BGTile.h"

namespace tysfml {
    BGTile::BGTile()
    {
        loadTexture();
        _sprite.setTexture(_texture);
        _sprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
    }

    void BGTile::loadTexture()
    {
        try
        {
            if (!_texture.loadFromFile("../resources/img/bgTile.png",
                                        sf::IntRect(71, 84, 48, 27)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
        _texture.setRepeated(true);
    }

    const sf::Sprite& BGTile::getSprite() const
    {
        return _sprite;
    }
} /* namespace tysfml */
