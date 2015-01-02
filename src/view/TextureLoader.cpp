/**
 * @file
 *      Plots an enitity from the world on an SFML object.
 * @author
 *      Olivier Brewaeys
 */

#include "TextureLoader.h"

namespace tysfml
{
    void TextureLoader::getBgTexture(sf::Texture& bgTexture)
    {
        try
        {
            if (!bgTexture.loadFromFile("../resources/img/bgTile.png",
                                        sf::IntRect(71, 84, 48, 27)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
        bgTexture.setRepeated(true);
    }

    void TextureLoader::getPlayerShipTexture(sf::Texture& psTexture)
    {
        try
        {
            if (!psTexture.loadFromFile("../resources/img/playership.png",
                                        sf::IntRect(71, 84, 48, 27)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    void TextureLoader::getEnemyShipTexture(sf::Texture& esTexture)
    {
        try
        {
            if (!esTexture.loadFromFile("../resources/img/enemyships.png",
                                        sf::IntRect(71, 84, 48, 27)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
