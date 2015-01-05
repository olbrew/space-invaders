#ifndef WINDOW_H_
#define WINDOW_H_

#include "../model/World.h"
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"
#include <SFML/Graphics.hpp>
#include <stack>

namespace tysfml
{
    class Window
    {
    public:
        Window();
        ~Window();
        void draw();
    private:
        sf::RenderWindow _window;
    };
} /* namespace tysfml */

#endif
