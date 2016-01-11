#include "SFMLGame.h"

namespace si {
namespace controller {

    SFMLGame::SFMLGame()
        : window_(std::make_shared<sf::RenderWindow>(sf::VideoMode(1200, 1600),
              "Space Invaders", sf::Style::Titlebar | sf::Style::Close))
        , world_(std::make_shared<model::World>())
        , view_(std::make_shared<view::View>(world_, window_))
    {
    }

    void SFMLGame::run()
    {
        // while the window is open
        while (window_->isOpen()) {

            // proces events
            sf::Event event;
            while (window_->pollEvent(event)) {
                int action;
                if (event.type == sf::Event::Closed) {
                    window_->close();
                }
                else if (event.type == sf::Event::KeyPressed) {
                    action = Keyboard::getKeyboard().processKeys(event);
                }
                // update the world as long as the player lives
                // Returns false when player dies.
                if (!world_->update()) {
                    // here be levels
                }
            }
            // clear the window...
            window_->clear(sf::Color::Black);

            // ...draw the entitites...
            view_->draw();

            // ...and display them on the window!
            window_->display();
        }
    }

} /* namespace controller */
} /* namespace si  */
