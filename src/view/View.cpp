/**
 * @file
 *		The View class holds the actual textures and takes care of
 *      drawing the objects on an SFML window.
 *
 * @author
 *		Olivier Brewaeys
 */

#include "View.h"

namespace si {
namespace view {

    View::View(std::shared_ptr<model::World> world,
        std::shared_ptr<sf::RenderWindow> window)
        : world_(world)
        , window_(window)
    {
    }

} /* namespace view */
} /* namespace si */
