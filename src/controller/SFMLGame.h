#ifndef SFMLGAME_H_
#define SFMLGAME_H_

#include "Keyboard.h"
#include "../model/World.h"
#include "../view/View.h"
#include <SFML/Graphics.hpp>
#include <memory>

namespace si {
namespace controller {

    class SFMLGame {
    public:
        SFMLGame();
        virtual ~SFMLGame();
        void run();

    private:
        std::shared_ptr<sf::RenderWindow> window_;
        std::shared_ptr<model::World> world_;
        std::unique_ptr<view::View> view_;
    };

} /* namespace controller */
} /* namespace si */

#endif
