#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"
#include <stack>
#include <memory>

namespace ty
{
    class World: public Entity
    {
    public:
        World();
        void score(const int);
    private:
        void move(const util::Position);

        std::stack<std::shared_ptr<Entity>> _worldEntities;
        unsigned int _score;
    };
}

#endif
