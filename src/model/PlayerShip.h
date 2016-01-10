#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

#include "Entity.h"
#include "Bullet.h"
#include <cassert>

namespace si {
namespace model {

    class PlayerShip : public Entity {
    public:
        PlayerShip();
        void update();

        void move(const util::Position);
        void moveOffset(const int offset);
        bool hit(const unsigned int);
        void shoot();

    private:
        int _hp;
        util::Position _pos;
    };

} /* namespace model */
} /* namespace si */

#endif
