#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include <deque>

namespace ty
{
    class World: public Entity
    {
    public:
        World();
    private:
        std::deque<std::unique_ptr<Entity>> _worldEntities;
    };
}

#endif
