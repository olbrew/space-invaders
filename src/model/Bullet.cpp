/**
 * @file
 *		Defines a bullet which can be shot by a PlayerShip or an
 *EnemyShip.
 * @author
 *		Olivier Brewaeys
 *
 *  A bullet is fired by a (player- or enemy-) ship and thus owns a pointer to
 *  that ship. It moves at a fast speed on the vertical axis.
 *  It doesn't move on the horitzontal axis and it's position on this axis
 *  is defined by the x-coordinate of the ship when the bullet was fired.
 */

#include "Bullet.h"

namespace si {
namespace model {

    Bullet::Bullet(const std::shared_ptr<Entity> ship)
        : _ship(ship)
    {
        //_pos = ship->getPos();
    }

    /**
     * Move bullet to a new position.
     * Asserts that the bullet can only be moved vertically.
     * This could be upgraded in a future version.
     * @param   pos     Position to be moved to.
     */
    void Bullet::move(const util::Position pos)
    {
        assert(pos._x == _pos._x);

        _pos = pos;
    }

} /* namespace model */
} /* namespace si */
