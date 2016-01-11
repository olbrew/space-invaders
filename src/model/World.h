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

#include <list>
#include <memory>
#include <cassert>

namespace si {
namespace model {

    using std::shared_ptr;

    class World : public Entity {
        typedef std::list<shared_ptr<Entity> > EntityList;

    private:
        shared_ptr<PlayerShip> ps_;
        shared_ptr<EntityList> enemyships_;
        shared_ptr<EntityList> bullets_;

    public:
        /**
         * Creates a world with its entities.
         * We initiliase a playership and enemyships at the world start.
         */
        World();

        /**
         * Inherited update command to update all enitities.
         * This follows the composition design pattern as world is an
         * entity itself.
         */
        bool update();

        /**
         * Some getters
         */
        shared_ptr<PlayerShip> getPS() const { return ps_; }
        shared_ptr<EntityList> get_enemyships() const { return enemyships_; }
        shared_ptr<EntityList> get_bullets() const { return bullets_; }
    };

} /* namespace model */
} /* namespace si */

#endif
