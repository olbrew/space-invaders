#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Position.h"

namespace ty
{
    class Entity
    {
    public:
        virtual void move(const util::Position) = 0;
        const util::Position& getPos() const;
    protected:
        // hidden ctors
        Entity();
        Entity(const unsigned int);
        Entity(const util::Position, const unsigned int);

        // data members
        util::Position _pos;
        const unsigned int _radius;
    };
}

#endif
