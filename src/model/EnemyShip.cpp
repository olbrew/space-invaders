/**
 * @file
 *		Defines an EnemyShip.
 * @author
 *		Olivier Brewaeys
 *
 *	In this version of the game, an enemyship is spawn at a
 *	random x-coordinate at the top of the world and moves down
 *	with time. It cannot move sideways and fires bullets with
 *	constant speed.
 */

#include "EnemyShip.h"

namespace ty
{
    /**
     * EnemyShip ctor spawns enemyship at random x-coordinate at the top of the
     * world.
     * Creates an enemyship at a random x-coordinate at the top of the world.
     * The starting y-coordinate is always 0.
     * The enemyship also has a radius and life/hitpoints.
     */
    EnemyShip::EnemyShip(): Entity(1), _hp(5)
    {
        // create random x-coordinate for our world.
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<> rand(1, 31);
        const unsigned int randomX = rand(generator);
        // we can't use move here, because of the assert that we can only
        // stay on 1 x-coordinate would fail this. This is only needed to
        // initalise the ships location.
        _pos = {randomX, 0};
    }

    /**
     * Move enemyship to a new position.
     * Asserts that the enemyship can only be moved vertically.
     * This could be upgraded in a future version.
     * @param   pos     Position to be moved to.
     */
    void EnemyShip::move(const util::Position pos)
    {
        assert(pos._x == _pos._x);

        _pos = pos;
    }

    /**
     * Reduces EnemyShips' life and returns true when dead.
     * @param   hp     The amount of hp to decrease with.
     * @return  returns true when enemyship dies and false when it stays alive.
     */
    bool EnemyShip::hit(const unsigned int hp)
    {
        if (_hp - hp <= 0)
        {
            return true;
        }
        _hp -= hp;
        return false;
    }
}
