#include "World.h"

namespace si {
namespace model {

    World::World()
        : ps_(std::make_shared<PlayerShip>())
    {
        // generate 20 enemyships which will be divided over four rows of 5 each
        for (int i = 0; i < 20; ++i) {
            auto es = std::make_shared<EnemyShip>(i);
            entities_.push_back(es);
        }
    }

    bool World::update()
    {
        // TODO return false when playership dies
        for (auto& ent : entities_) {
            ent->update();
        }
        return true;
    }

} /* namespace model */
} /* namespace si */
