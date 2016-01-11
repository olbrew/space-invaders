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

    View::View(
        shared_ptr<model::World> world, shared_ptr<sf::RenderWindow> window)
        : world_(world)
        , window_(window)
    {
        // setup_sprites();
    }

    void View::draw()
    {
        // get positions of world entities and then draw them
        // sprite.setPosition(_pos._x * 10, _pos._y * 10);
        // window->draw(sprite)
    }

    void View::setup_sprites()
    {
        // load textures
        load_playership_texture();
        load_enemyship_texture();
        load_bullet_texture();

        // set sprites
        playership_sprite_->setTexture(*playership_texture_);
        enemyship_sprite_->setTexture(*enemyship_texture_);
        bullet_sprite_->setTexture(*bullet_texture_);
    }

    void View::load_playership_texture()
    {
        try {
            if (!playership_texture_->loadFromFile(
                    "../resources/img/characters.png",
                    sf::IntRect(280, 2560, 990, 600))) {
                throw std::runtime_error(
                    "Could not load PlayerShip texture from file");
            }
        }
        catch (std::runtime_error& e) {
            std::cerr << "Fatal error: " << e.what() << std::endl;
        }
    }

    void View::load_enemyship_texture()
    {
        try {
            if (!enemyship_texture_->loadFromFile(
                    "../resources/img/characters.png",
                    sf::IntRect(0, 0, 714, 682))) {
                throw std::runtime_error(
                    "Could not load EnemyShip texture from file");
            }
        }
        catch (std::runtime_error& e) {
            std::cerr << "Fatal error: " << e.what() << std::endl;
        }
    }

    void View::load_bullet_texture()
    {
        try {
            if (!bullet_texture_->loadFromFile(
                    "../resources/img/characters.png",
                    sf::IntRect(720, 1900, 107, 365))) {
                throw std::runtime_error(
                    "Could not load Bullet texture from file");
            }
        }
        catch (std::runtime_error& e) {
            std::cerr << "Fatal error: " << e.what() << std::endl;
        }
    }

} /* namespace view */
} /* namespace si */
