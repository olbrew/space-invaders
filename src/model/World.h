#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"

#include <deque>
#include <memory>

namespace si {
namespace model {

    class World : public Entity {
    public:
        World();
        void score(const int);
        std::shared_ptr<PlayerShip> getPS() const;
        std::deque<std::shared_ptr<Entity> > getEntities();

        void update();

    private:
        void move(const util::Position);

        std::deque<std::shared_ptr<Entity> > _worldEntities;
        std::shared_ptr<PlayerShip> _ps;
        unsigned int _score;
    };

} /* namespace model */
} /* namespace si */

#endif
