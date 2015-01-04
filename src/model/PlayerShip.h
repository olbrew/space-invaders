#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

#include "Entity.h"
#include <cassert>

namespace ty {
    class PlayerShip: public Entity
    {
    public:
        PlayerShip();
        void move(const util::Position);
    private:
        unsigned int _life;
    };
} /* namespace ty */

#endif
