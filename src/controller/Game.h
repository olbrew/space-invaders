#ifndef GAME_H
#define GAME_H

#include "../model/World.h"
#include "../view/Window.h"
#include "Stopwatch.h"
#include "Keyboard.h"
#include <memory>
#include <queue>
#include <SFML/System.hpp>

namespace ty {
    class Game
    {
    public:
        Game();
        void start();
        void playDefaultLevel();
    private:
        std::queue<std::shared_ptr<World>> _levels;
        std::shared_ptr<tysfml::Window> _window;
    };
} /* namespace ty */

#endif
