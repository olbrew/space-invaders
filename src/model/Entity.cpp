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
     * Initalises entity at a position with a size (radius).
     * This ctor is protected, because it is only needed in the ctors
     * of its derived classes. There shouldn't be a need to make an
     * entity object.
     *
     * @param      pos      the position where to initalise this entity
     *                      in the world.
     * @param      radius   defines size of entity, because all entities are
     *                      abstracted as circles.
     */
    Entity::Entity(const util::Position pos,
                   const double radius): _pos(pos), _radius(radius) {}

}
