#include "World.h"

namespace si {
namespace model {

    World::World()
        : ps_(std::make_shared<PlayerShip>())
        , enemyships_(std::make_shared<EntityList>())
        , bullets_(std::make_shared<EntityList>())
    {
        // generate 20 enemyships which will be divided over four rows of 5 each
        for (unsigned int i = 0; i < 20; ++i) {
            enemyships_->push_back(std::make_shared<EnemyShip>(i));
        }
    }

    bool World::update()
    {
        if (ps_->update()) {
            for (auto it = enemyships_->begin(); it != enemyships_->end();
                 ++it) {
                if (!(*it)->update()) {
                    enemyships_->erase(it);
                }
            }
            for (auto it = bullets_->begin(); it != bullets_->end(); ++it) {
                if (!(*it)->update()) {
                    bullets_->erase(it);
                }
            }
            return true;
        }
        return false;
    }

} /* namespace model */
} /* namespace si */
