#ifndef BULLET_H_
#define BULLET_H_

#include "Entity.h"
#include <memory>

namespace si {
namespace model {

    class Bullet : public Entity {
    public:
        Bullet(const std::shared_ptr<Entity>);
        void move(const util::Position);

    private:
        const std::shared_ptr<Entity> _ship;
        util::Position _pos;
    };

} /* namespace model */
} /* namespace si */

#endif
