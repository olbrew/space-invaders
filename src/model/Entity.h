#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Position.h"

namespace si {
namespace model {

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
    class Entity {
    public:
        // TODO composite pattern: every entity has an updaet function
        virtual void update() = 0;

    protected:
        // hidden ctors
        //Entity();
        //Entity(const unsigned int);
        //Entity(const util::Position, const unsigned int);
    };

} /* namespace model */
} /* namespace si */

#endif
