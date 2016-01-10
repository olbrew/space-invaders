/**
 * @file
 *      ABC for different entities of which game world can exist.
 * @author
 *      Olivier Brewaeys
 *
 *  Our gameworld consists of entities and is one in itself as
 *  well, so this class serves as a parent class for the
 *  composition design pattern.
 *
 *  Notice that this file also defines two handy typedefs for Position and Size
 *  since it will be included in every derived class which will need them.
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include <string>
#include "../util/Vector2D.h"

namespace si {
namespace model {

    typedef util::Vector2D<unsigned int> Position;
    typedef util::Vector2D<unsigned int> Size;

    class Entity {
    public:
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
         * Type function which return the type of the entity. This is needed to
         * determine which sprites to draw in the views.
         *
         * @return   a string defining the type
         */
        virtual std::string type() const = 0;
    };

} /* namespace model */
} /* namespace si */

#endif
