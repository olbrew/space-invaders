#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include <stack>
#include <memory>
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"

namespace ty
{
    class World: public Entity
    {
    public:
        World();
        void move(const util::Position);
        void score(const int);
    private:
        std::stack<std::shared_ptr<Entity>> _worldEntities;
        unsigned int _score;
    };
}

#endif
