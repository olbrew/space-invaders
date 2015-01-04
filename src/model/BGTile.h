#ifndef BGTILE_H_
#define BGTILE_H_

#include "Entity.h"

namespace  ty
{
    class BGTile: public Entity
    {
    public:
        BGTile();
        void move(const util::Position);

    };
}

#endif
