#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

#include "Entity.h"
#include "Bullet.h"
#include <cassert>

namespace ty {
    class PlayerShip: public Entity
    {
    public:
        PlayerShip();
        void move(const util::Position);
        void moveOffset(const int offset);
        bool hit(const unsigned int);
        void shoot();
    private:
        int _hp;
    };
} /* namespace ty */

#endif
