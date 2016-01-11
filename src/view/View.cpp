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

    const unsigned int View::SCALE = 80;

    View::View(
        shared_ptr<model::World> world, shared_ptr<sf::RenderWindow> window)
        : world_(world)
        , window_(window)
        , playership_texture_(std::make_shared<sf::Texture>())
        , enemyship_texture_(std::make_shared<sf::Texture>())
        , bullet_texture_(std::make_shared<sf::Texture>())
        , playership_sprite_(std::make_shared<sf::Sprite>())
        , enemyship_sprite_(std::make_shared<sf::Sprite>())
        , bullet_sprite_(std::make_shared<sf::Sprite>())
    {
        setup_sprites();
    }

    void View::draw()
    {
        // draw playership
        Position pos = world_->getPS()->getPosition();
        playership_sprite_->setPosition(pos.x * SCALE, pos.y * SCALE);
        window_->draw(*playership_sprite_);

        // draw enemyships
        for (auto enemyship : *world_->get_enemyships()) {
            Position pos = enemyship->getPosition();
            enemyship_sprite_->setPosition(pos.x * SCALE, pos.y * SCALE);
            window_->draw(*enemyship_sprite_);
        }

        // draw bullets
        for (auto bullet : *world_->get_bullets()) {
            Position pos = bullet->getPosition();
            bullet_sprite_->setPosition(pos.x * SCALE, pos.y * SCALE);
            window_->draw(*bullet_sprite_);
        }
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

        // scale sprites for use
        playership_sprite_->scale(0.2f, 0.2f);
        enemyship_sprite_->scale(0.2f, 0.2f);
        bullet_sprite_->scale(0.2f, 0.2f);
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
