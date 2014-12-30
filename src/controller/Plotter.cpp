/**
 * @file
 *      Plots an enitity from the world on an SFML object.
 * @author
 *      Olivier Brewaeys
 */

#include "Plotter.h"

namespace tysfml
{
    Plotter::Plotter(const std::unique_ptr<ty::Entity>& ent)
    {
        sf::Texture bgTile;
        try
        {
            if (!bgTile.loadFromFile("../../resources/img/shapesz.png",
                                     sf::IntRect(0, 0, 70, 80)))
            {
                throw std::runtime_error("Could not load bgTile texture from file");
            }
        }
        catch (std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
        bgTile.setRepeated(true);
        sf::Sprite bgSprite;
        bgSprite.setTexture(bgTile);
        bgSprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
    }
}
