/**
 * @file
 *      Sets up a SFML Game and runs it.
 * @author
 *      Olivier Brewaeys
 *
 * Every level can be seen as one game and its corresponding world.
 * This class also holds the game state, like the elapsed time and
 * delegates user requests to the model which updates the view.
 * It is the main controller function and runs the main/game loop.
 */

#ifndef SFMLGAME_H_
#define SFMLGAME_H_

#include "Keyboard.h"
#include "../model/World.h"
#include "../view/View.h"

#include <SFML/Graphics.hpp>
#include <memory>

namespace si {
namespace controller {

    using std::shared_ptr;

    class SFMLGame {
    private:
        shared_ptr<sf::RenderWindow> window_;
        shared_ptr<model::World> world_;
        shared_ptr<view::View> view_;

    public:
        /**
         * SFMLGame constructor
         *
         * Set everything up for the start of a game.
         * Initializes a SFML-window, a world object contained the logic and a
         * view to draw the world objects on the SFML window.
         */
        SFMLGame();

        /**
         * SFMLGame destructor
         *
         * Closes the window when the game exits.
         */
        virtual ~SFMLGame() { window_->close(); }

        /**
         * The main/loop. This is where all the magic happens!
         */
        void run();
    };

} /* namespace controller */
} /* namespace si */

#endif
