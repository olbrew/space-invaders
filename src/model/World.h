#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include <deque>

namespace ty
{
    using std::deque;
    using std::unique_ptr;

    class World: public Entity
    {
    public:
        World();
    private:
        deque<unique_ptr<Entity>> _worldEntities;
    };
}

#endif
