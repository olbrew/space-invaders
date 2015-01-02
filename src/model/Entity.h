#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Position.h"

namespace ty
{
    class Entity
    {
    public:
        Entity();
        Entity(const util::Position, const unsigned int);
        void move(const util::Position);
    protected:
        util::Position _pos;
        unsigned int _radius;
    };
}

#endif
