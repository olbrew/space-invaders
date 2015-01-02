/**
 * @file
 *      Helper class that loads the needed textures from files.
 * @author
 *      Olivier Brewaeys
 */

#include "TextureLoader.h"

namespace tysfml
{
    /**
     * Loads the background texture
     * @param    bgTexture      texture object passed by reference to apply
     * loaded texture to.
     */
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

    /**
     * Loads the playership texture
     * @param    psTexture      texture object passed by reference to apply
     * loaded texture to.
     */
    void TextureLoader::getPlayerShipTexture(sf::Texture& psTexture)
    {
        try
        {
            if (!psTexture.loadFromFile("../resources/img/playership.png",
                                        sf::IntRect(49, 140, 21, 17)))
            {
                throw std::runtime_error("Could not load playerShip texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    /**
     * Loads the enemyship texture
     * @param    esTexture      texture object passed by reference to apply
     * loaded texture to.
     */
    void TextureLoader::getEnemyShipTexture(sf::Texture& esTexture)
    {
        try
        {
            if (!esTexture.loadFromFile("../resources/img/enemyships.png",
                                        sf::IntRect(4, 140, 15, 20)))
            {
                throw std::runtime_error("Could not load enemyShip texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
