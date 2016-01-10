/**
 * @file
 *      Defines the world in the game runs.
 * @author
 *      Olivier Brewaeys
 *
 *  World holds a colletion of the entities necessary for the game.
 *  This world is defined on a 15x20 grid to keep a 3/4 aspect ratio.
 *  The views can scale it up (but keep the aspect ratio!) to draw it.
 */

#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include "PlayerShip.h"
#include "EnemyShip.h"
#include "Bullet.h"

#include <deque>
#include <memory>
#include <string>
#include <cassert>

namespace si {
namespace model {

    class World : public Entity {
    private:
        std::deque<std::shared_ptr<Entity> > entities_;
        std::shared_ptr<PlayerShip> ps_;

    public:
        /**
         * Creates a world with its entities.
         * We initiliase a playership and enemyships at the world start.
         */
        World();

        /**
         * Inherited update command to update all enitities.
         * This follows the composition design pattern as world is itself an
         * entity.
         */
        bool update();
        std::string type() const { return "world"; }

        std::shared_ptr<PlayerShip> getPS() { return ps_; }
        std::deque<std::shared_ptr<Entity> > getEntities() { return entities_; }
    };

} /* namespace model */
} /* namespace si */

#endif
