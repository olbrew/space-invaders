/**
 * @file
 *      ABC for different entities of which game world can exist.
 * @author
 *      Olivier Brewaeys
 *
 *  Our gameworld consists of entities and is one in itself as
 *  well, so this class serves as a parent class for the
 *  composition design pattern.
 */

#include "Entity.h"

namespace ty
{
    /**
     * Default ctor, initalises entity at center of world.
     */
    Entity::Entity()
    {
        util::Position pos(4, 3);
        _pos = pos;
    }

    /**
     * Initalises entity at given position.
     * @param      pos      the position where to initalise this entity
     *                      in the world.
     */
    Entity::Entity(const util::Position pos): _pos(pos) {}

}
