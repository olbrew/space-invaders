#ifndef WINDOW_H_
#define WINDOW_H_

#include "../model/World.h"
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"
#include "Menu.h"
#include <SFML/Graphics.hpp>
#include <stack>
#include <memory>

namespace tysfml
{
    class Window
    {
    public:
        Window();
        ~Window();
        void show();
        void toggleState();
    private:
        bool _paused;
        std::shared_ptr<Menu> _menu;
        sf::RenderWindow _window;
    };
} /* namespace tysfml */

#endif
