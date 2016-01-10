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

#include "SFMLGame.h"

namespace si {
namespace controller {

    /**
     * Setup a game window and a world object
     */
    SFMLGame::SFMLGame()
        : window_(std::make_shared<sf::RenderWindow>(sf::VideoMode(1600, 1200),
              "Space Invaders", sf::Style::Titlebar | sf::Style::Close))
        , world_(std::make_shared<model::World>())
        , view_(std::make_unique<view::View>(world_, window_))
    {
    }

    /**
     * Properly close the SFML window.
     */
    SFMLGame::~SFMLGame() { window_->close(); }

    /**
     * The main loop
     */
    void SFMLGame::run()
    {
        while (window_->isOpen()) {
            sf::Event event;
            while (window_->pollEvent(event)) {
                int action;
                if (event.type == sf::Event::Closed) {
                    window_->close();
                }
                else if (event.type == sf::Event::KeyPressed) {
                    action = Keyboard::getKeyboard().processKeys(event);
                }
                world_->update();
            }
        }
    }

} /* namespace controller */
} /* namespace si  */
