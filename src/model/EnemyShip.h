/**
 * @file
 *		Defines an EnemyShip.
 * @author
 *		Olivier Brewaeys
 *
 *	An enemyship is spawned at a location determined by its index.
 *  Each enemyship has a unique index.
 *  The ships are placed in rows of 5, the first row starts at the top of the
 *  screen, going down form there.
 *  An enemyhsip starts with 1 hitpoint, a speed of 1. Its size is 1 width
 *  unit and 2 height units.
 *
 *  It can only move sideways, so it remains at its inital height.
 *  The enemy can shoot bullets to try to destroy the player.
 *  On random interals a random ship is chosen to shoot a bullet.
 *  A enemy bullet cannot hurt an enemyship so it just crosses through them.
 *  When the enemyship's HP reaches zero it dies.
 */

#ifndef ENEMYSHIP_H_
#define ENEMYSHIP_H_

#include "Entity.h"
#include "Bullet.h"
#include "../util/RandomGenerator.h"
#include "../util/Vector2D.h"

namespace si {
namespace model {

    class EnemyShip : public Entity {
    private:
        unsigned int index_;
        Position pos_;
        bool right_;
        Size size_;
        unsigned int hp_;
        unsigned int speed_;

    public:
        /**
         * Enemyship ctor.
         *
         * Creates a enemyship on a location determined by its index
         * with the defined attributes.
         *
         * @param    index      index of the enemyship, each enemy has a unique
         *                      one and the hightest index + 1 is the initial
         *                      amount of enemyships.
         * @param    right      whether the ship moves right, default: true.
         * @param    size       size of the playership, default: w = 1, h = 2.
         * @param    hp         amount of hitpoints, default: 1.
         * @param    speed      speed with which playership moves each step:
         *                      default = 1.
         */
        EnemyShip(const unsigned int index, const bool right = true,
            const Size size = Size(1, 2), const unsigned int hp = 1,
            const unsigned int speed = 1);

        /**
         * Implementation of update function from ABC entity.
         *
         * Playership's position gets changed by the move function.
         * So this update implentation only checks if the playership is still
         * alive.
         *
         * @return   true when the playership is still alive.
         */
        bool update();

        /**
         * Creates a bullet at the current location the enemyship.
         */
        void shoot();

        /**
         * Reduces enemyships' life. This if supposed to be called when a
         * colission with a bullet occurs.
         *
         * @param   hp     The amount of hp to decrease with: default = 1.
         */
        void hit(const unsigned int hp = 1);
    };

} /* namespace model */
} /* namespace si */

#endif
