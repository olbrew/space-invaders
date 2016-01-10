#include "Bullet.h"

namespace si {
namespace model {

    Bullet::Bullet(const bool player, const Position pos, const Size size,
        const unsigned int speed)
        : player_(player)
        , size_(size)
        , speed_(speed)
    {
        pos_.x = pos.x;
        if (player_) {
            pos_.y = pos.y - 1;
        }
        else {
            pos_.y = pos.y + 1;
        }
    }

    bool Bullet::update()
    {
        // bullet is about to exit playing field
        // remove it from entitites
        if (pos_.y == 0 || pos_.y == 20) {
            return false;
        }
        else {
            // check which direction to move
            if (player_) {
                pos_.y -= speed_;
            }
            else {
                pos_.y += speed_;
            }
            return true;
        }
    }

} /* namespace model */
} /* namespace si */
