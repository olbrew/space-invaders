#include "PlayerShip.h"

namespace si {
namespace model {

    PlayerShip::PlayerShip(const Position pos, const Size size,
        const unsigned int hp, const unsigned int speed)
        : pos_(pos)
        , size_(size)
        , hp_(hp)
        , speed_(speed)
    {
    }

    bool PlayerShip::update()
    {
        if (hp_ <= 0) {
            return false;
        }
        else {
            return true;
        }
    }

    void PlayerShip::move(const bool right)
    {
        if (right) {
            unsigned int new_x = pos_.x + speed_;
            if (new_x >= 15) {
                pos_.x = 14;
            }
            else {
                pos_.x = new_x;
            }
        }
        else {
            unsigned int new_x = pos_.x - speed_;
            if (new_x <= 0) {
                pos_.x = 1;
            }
            else {
                pos_.x = new_x;
            }
        }
    }

    void PlayerShip::shoot() const { Bullet bullet(true, pos_); }

    void PlayerShip::hit(const unsigned int hp)
    {
        if (hp_ - hp <= 0) {
            hp_ = 0;
        }
        hp_ -= hp;
    }

} /* namespace model */
} /* namespace si */
