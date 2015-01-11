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
     * Default ctor for Entity.
     */
    Entity::Entity(): _radius(1) {}

    /**
     * Ctor where only radius is known beforehand.
     * Can be used when the position of the entity must still be determined.
     * @param   r     Radius of entity.
     */
    Entity::Entity(const unsigned int r): _radius(r) {}

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
                   const unsigned int radius): _pos(pos), _radius(radius) {}


    /**
     * Returns the position of the entity.
     * @return  The position
     */
    const util::Position& Entity::getPos() const
    {
        return _pos;
    }

    /**
     * Empty definition of getSprite function for derived SFML-classes.
     * @return  an empty sprite
     *
     * Getsprite functions is needed for SFML-classes. Because we keep the
     * objects of these classes in a container of pointers to Entities
     * according to the composite design pattern.
     * To call the getSprite function on entities, it must be implemented in its
     * base class. We have to include, and thereby break a little the decoupling
     * between the model and view, the SFML Graphics lib to be able to return a
     * Sprite.
     * If this function was made pure virtual we would have to implement it in
     * this way in all it's non SFML subclasses as well, so this seems to me the
     * lessest of evils. It is'nt perfect code, but it works.
     */
    const sf::Sprite& Entity::getSprite() const {return _sprite;}
}
