#ifndef ENEMYSHIP_H_
#define ENEMYSHIP_H_

#include "Entity.h"
#include <cassert>
#include <random>

namespace ty {
class EnemyShip : public Entity {
public:
    EnemyShip();
    void move(const util::Position);
    bool hit(const unsigned int);
    void shoot();

private:
    int _hp;
};
}

#endif
