/**
 * @file
 *		Defines a bullet which can be shot by a PlayerShip or an
 *      EnemyShip.
 * @author
 *		Olivier Brewaeys
 *
 *  A bullet is fired by a (player- or enemy-)ship. It is currently sufficient
 *  to hold a simple boolean to check if a bullet was fired by a player or an
 *  enemy.
 *  This will be used to make sure that the bullet keeps moving in the right
 *  direction (this is up for player bullets and down for enemy bullets).
 *
 *  It moves at a fast speed on the vertical axis.
 *  It doesn't move on the horitzontal axis and its position on this axis
 *  is defined by the x-coordinate of the ship when the bullet was fired.
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "Entity.h"
#include "../util/Vector2D.h"

#include <memory>

namespace si {
namespace model {

    class Bullet : public Entity {
    private:
        bool player_;
        Size size_;
        unsigned int speed_;
        Position pos_;

    public:
        /**
         * Creates a bullet with a starting position.
         * It takes the x-coordinate from its firing ship
         * and an y-coordinate just above, under the ship for a
         * playership, enemyship respectively.
         *
         * @param    player     true if player fired, false if enemy fired
         * @param    pos        current position of the firing ship
         * @param    size       the size of the bullet, default: w = 1, h = 1
         * @param    speed      the speed with which the bullet moves each step:
         *                      default = 2
         */
        Bullet(const bool player, const Position pos,
            const Size size = Size(1, 1), const unsigned int speed = 2);

        /**
         * Implementation of update function from ABC entity.
         *
         * Move bullet to a new position.
         * The bullet can only move vertically.
         *
         * @return   true when the bullet is still moving, false when it has hit
         *              a target or left the world grid
         */
        bool update();

        /**
         * Simple getter for the position.
         * This is needed for drawing the enity.
         *
         * @return  The current posititon of the entity.
         */
        Position getPosition() const { return pos_; }
    };

} /* namespace model */
} /* namespace si */

#endif
