#ifndef GAME_H
#define GAME_H

#include "../model/World.h"
#include "../view/Window.h"
#include "Stopwatch.h"
#include <SFML/Graphics.hpp>
#include <memory>
#include <queue>

namespace ty {
    class Game
    {
    public:
        Game();
        void start();
        void playDefaultLevel();
    private:
        bool _paused;
        std::queue<std::shared_ptr<World>> _levels;
        std::shared_ptr<World> _currentLvl;
        std::shared_ptr<tysfml::Window> _window;
    };
} /* namespace ty */

#endif
