#ifndef WINDOW_H_
#define WINDOW_H_

#include "../model/Entity.h"
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"
#include "Menu.h"
#include <SFML/Graphics.hpp>
#include <deque>
#include <memory>

namespace tysfml
{
    class Window
    {
    public:
        Window();
        ~Window();
        std::shared_ptr<sf::RenderWindow> get();
        void drawMenu();
        void setupWorld();
        void drawWorld();
    private:
        std::shared_ptr<Menu> _menu;
        std::shared_ptr<sf::RenderWindow> _window;
        std::deque<std::shared_ptr<ty::Entity>> _sfmlEntities;
    };
} /* namespace tysfml */

#endif
