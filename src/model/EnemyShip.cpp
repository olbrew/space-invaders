#include "EnemyShip.h"

namespace si {
namespace model {

    EnemyShip::EnemyShip(const unsigned int index, const bool right,
        const Size size, const unsigned int hp, const unsigned int speed)
        : index_(index)
        , pos_((((index % 5) + 2) * 2), (((index % 4) + 1) * 2))
        , right_(right)
        , size_(size)
        , hp_(hp)
        , speed_(speed)
    {
    }

    bool EnemyShip::update()
    {
        // first check if ship is still alive
        if (hp_ <= 0) {
            return false;
        }
        else {
            // then calculate new postion
            // (re)calculate original x coordinate based on index.
            unsigned int start_x = ((index_ % 5) + 2) * 2;
            if (right_) {
                unsigned int new_x = pos_.x + speed_;
                if (new_x > start_x + 2) {
                    pos_.x = start_x + 2;
                    right_ = false;
                }
                else {
                    pos_.x = new_x;
                }
            }
            else {
                unsigned int new_x = pos_.x - speed_;
                if (new_x < start_x - 3) {
                    pos_.x = start_x - 3;
                    right_ = true;
                }
                else {
                    pos_.x = new_x;
                }
            }
            return true;
        }
    }

    void EnemyShip::shoot() { Bullet bullet(false, pos_); }

    void EnemyShip::hit(const unsigned int hp)
    {
        if (hp_ - hp <= 0) {
            hp_ = 0;
        }
        hp_ -= hp;
    }

} /* namespace model */
} /* namespace si */
