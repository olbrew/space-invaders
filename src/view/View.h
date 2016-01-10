#ifndef PLAYERSHIP_SFML_H
#define PLAYERSHIP_SFML_H

#include "../model/World.h"

#include <SFML/Graphics.hpp>
#include <stdexcept>

namespace si {
namespace view {

    class View {
    public:
        View(std::shared_ptr<model::World>, std::shared_ptr<sf::RenderWindow>);

    private:
        std::shared_ptr<model::World> world_;
        std::shared_ptr<sf::RenderWindow> window_;
    };

} /* namespace view */
} /* namespace si */

#endif
