#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Position.h"

namespace ty
{
    class Entity
    {
    public:
        virtual void move(const util::Position) = 0;
    protected:
        Entity(const util::Position, const double);
        util::Position _pos;
        double _radius;
    };
}

#endif
