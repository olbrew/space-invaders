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
        bool hit(const unsigned int);
    private:
        int _hp;
    };
} /* namespace ty */

#endif
