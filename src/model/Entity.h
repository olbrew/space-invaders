#ifndef ENTITY_H_
#define ENTITY_H_

#include "../util/Position.h"
#include <SFML/Graphics.hpp>

namespace ty
{
    class Entity
    {
    public:
        virtual void move(const util::Position) = 0;
        const util::Position& getPos() const;
        virtual const sf::Sprite& getSprite() const;
    protected:
        // hidden ctors
        Entity();
        Entity(const unsigned int);
        Entity(const util::Position, const unsigned int);

        // data members
        util::Position _pos;
        const unsigned int _radius;
        // empty sprite to return by the virtual getSprite function
        sf::Sprite _sprite;
    };
}

#endif
