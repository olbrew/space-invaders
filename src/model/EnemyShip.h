#ifndef ENEMYSHIP_H_
#define ENEMYSHIP_H_

#include "Entity.h"
#include <cassert>
#include <random>

namespace si {
namespace model {

    class EnemyShip : public Entity {
    public:
        EnemyShip();
        void move(const util::Position);
        void update();
        bool hit(const unsigned int);
        void shoot();

    private:
        int _hp;
        util::Position _pos;
    };

} /* namespace model */
} /* namespace si */

#endif
