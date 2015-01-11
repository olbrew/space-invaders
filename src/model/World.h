#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include "BGTile.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"
#include <deque>
#include <memory>

namespace ty
{
    class World: public Entity
    {
    public:
        World();
        void score(const int);
        std::shared_ptr<PlayerShip> getPS() const;
        std::deque<std::shared_ptr<Entity>> getEntities();
    private:
        void move(const util::Position);

        std::deque<std::shared_ptr<Entity>> _worldEntities;
        std::shared_ptr<PlayerShip> _ps;
        unsigned int _score;
    };
}

#endif
