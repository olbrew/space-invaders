#ifndef GAME_H
#define GAME_H

#include <memory>
#include "../model/World.h"
#include "../view/Window.h"

namespace ty {
    class Game
    {
    public:
        Game(std::shared_ptr<World>);
    private:
        std::shared_ptr<World> _world;
    };
} /* namespace ty */

#endif
