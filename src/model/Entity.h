#ifndef ENTITY_H_
#define ENTITY_H_

#include <memory>
#include "../util/Position.h"

namespace ty
{
    class Entity
    {
    public:
        Entity();
        Entity(const util::Position);
        void move(const util::Position);
    private:
        util::Position _pos;
    };
}

#endif
