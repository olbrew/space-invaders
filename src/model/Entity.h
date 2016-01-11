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

#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Vector2D.h"

namespace si {
namespace model {

    class Entity {
    public:
        /**
         *  Some handy typedefs for Position and Size
         */
        typedef util::Vector2D<unsigned int> Position;
        typedef util::Vector2D<unsigned int> Size;

        /**
         * Base class must have a virtual destructor so it's inherited objects
         * can be properly destroyed when pointed to by a base class pointer.
         */
        virtual ~Entity() {}

        /**
         * Update function must be defined for every entity so it's state can be
         * updated by the controllers.
         *
         * @return   whether the object is still alive and/or in the world.
         */
        virtual bool update() = 0;

        /**
         * Returns current Position.
         * Needed by the drawable entities for drawing them at the right
         * location.
         *
         * @return   The current position of the entity.
         */
        virtual Position getPosition() const = 0;
    };

} /* namespace model */
} /* namespace si */

#endif
