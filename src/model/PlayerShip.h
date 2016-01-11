/**
 * @file
 *      Defines a PlayerShip
 * @author
 *      Olivier Brewaeys
 *
 *  A playership is spawned at the center of the bottom of the screen.
 *  This is at (8, 19) for a rectangular 15x20 grid (the world
 *  dimensions). It starts with 10 hitpoints, a speed of 1. Its size is 3 width
 *  units and 2 height units.
 *
 *  It can only move sideways, so it remains at the bottom of the screen.
 *  The player can shoot bullets to destroy enemy ships and move to avoid being
 *  shot itself.
 *  When the playership's HP reaches zero it dies and the level ends.
 */

#ifndef PLAYERSHIP_H_
#define PLAYERSHIP_H_

#include "Entity.h"
#include "Bullet.h"
#include "../util/Vector2D.h"

namespace si {
namespace model {

    class PlayerShip : public Entity {
    private:
        Position pos_;
        Size size_;
        unsigned int hp_;
        unsigned int speed_;

    public:
        /**
         * Playership ctor.
         *
         * Creates a playership at the center, downside of the world with the
         * defined attributes.
         *
         * @param    pos        position at which the playership gets
         *                      initalised, default: (8, 19) = center,
         *                      downside in a 15x20 grid.
         * @param    size       size of the playership, default: w = 3, h = 2.
         * @param    hp         amount of hitpoints, default: 10.
         * @param    speed      speed with which playership moves each step:
         *                      default = 1.
         */
        PlayerShip(const Position pos = Position(8, 19),
            const Size size = Size(3, 2), const unsigned int hp = 10,
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
         * Move playership on the horizontal axis with an offset.
         * Makes sure that you can't go outisde playing field.
         *
         * @param   right       If true playership moves right with `speed_`
         *                      units, if false he moves left.
         */
        void move(const bool);

        /**
         * Creates a bullet at the current location the playership.
         */
        void shoot() const;

        /**
         * Reduces playerships' life. This if supposed to be called when a
         * colission with a bullet occurs.
         *
         * @param   hp     The amount of hp to decrease with: default = 1.
         */
        void hit(const unsigned int hp = 1);

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
