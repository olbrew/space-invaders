/**
 * @file
 *      Defines a PlayerShip
 * @author
 *      Olivier Brewaeys
 *
 *  In this version of the game, a playership is spawn at the center
 *  of the bottom of the screen. It can only move sideways to dodge
 *  bullets or enemyships. It can shoot bullets itself to try to
 *  destroy enemyShips and increase the players score.
 */

#include "PlayerShip.h"

namespace si {
namespace model {

    /**
     * Playership ctor.
     * Creates a playership at the center, downside of the world
     * with a given radius and life/hitpoints.
     */
    PlayerShip::PlayerShip()
        : _hp(10)
    {
    }

    /**
     * Move playership to a new position.
     * @param   pos     Position to be moved to.
     * Asserts that the ship can only be moved horizontally,
     * in this version.
     */
    void PlayerShip::move(const util::Position pos)
    {
        assert(pos._y == _pos._y);

        _pos = pos;
    }

    void PlayerShip::update() {}

    /**
     * Move playership in regards to its current position
     * @param   offset     The amount of space playership must move on the
     * horizontal axis.
     */
    void PlayerShip::moveOffset(const int offset)
    {
        move({ _pos._x + offset, _pos._y });
    }

    /**
     * Reduces PlayerShips' life and returns true when dead.
     * @param   hp     The amount of hp to decrease with.
     * @return  returns true when playership dies and false when it stays alive.
     */
    bool PlayerShip::hit(const unsigned int hp)
    {
        if (_hp - hp <= 0) {
            return true;
        }
        _hp -= hp;
        return false;
    }

    void PlayerShip::shoot()
    {
        // TODO find a way to wrap `this` in a shared_ptr
        // Bullet bullet(this);
    }

} /* namespace model */
} /* namespace si */
