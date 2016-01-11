#ifndef VIEW_H_
#define VIEW_H_

#include "../model/World.h"
#include "../util/Vector2D.h"

#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace si {
namespace view {

    using std::shared_ptr;

    class View {
    private:
        shared_ptr<model::World> world_;
        shared_ptr<sf::RenderWindow> window_;

        shared_ptr<sf::Texture> playership_texture_;
        shared_ptr<sf::Texture> enemyship_texture_;
        shared_ptr<sf::Texture> bullet_texture_;

        shared_ptr<sf::Sprite> playership_sprite_;
        shared_ptr<sf::Sprite> enemyship_sprite_;
        shared_ptr<sf::Sprite> bullet_sprite_;

        /**
         * Load textures and set their corresponding sprites.
         */
        void setup_sprites();
        void load_playership_texture();
        void load_enemyship_texture();
        void load_bullet_texture();

    public:
        typedef util::Vector2D<unsigned int> Position;
        static const unsigned int SCALE;

        /**
         * Set up a view. Sets up the sprites and registers a window and world
         * object to work with.
         *
         * @param    world      The world to draw.
         * @param    window     The window to draw on.
         */
        View(shared_ptr<model::World>, shared_ptr<sf::RenderWindow>);

        void draw();
    };

} /* namespace view */
} /* namespace si */

#endif
