#include "PlayerShip.h"

namespace ty
{
    /**
     * Playership ctor.
     * Creates an entity at the center, down of the world with
     * a radius of 0.75 and 10 hitpoints.
     */
    PlayerShip::PlayerShip(): Entity({4, 5}, 0.75), _life(10) {}

    void PlayerShip::move(const util::Position pos)
    {
        assert(pos._y == _pos._y);
        _pos = pos;
    }
    
}
