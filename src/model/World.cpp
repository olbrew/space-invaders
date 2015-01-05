/**
 * @file
 *      Defines the world in the game runs.
 * @author
 *      Olivier Brewaeys
 *
 *  World holds a colletion of the entities necessary for the game.
 *  Every world is an abstraction for a level.
 *  If you want to play another level, you make another world.
 */

#include "World.h"

namespace ty
{
    /**
     * @file
     *		Creates a world with its entities.
     * @author
     *		Olivier Brewaeys
     *
     * Must make a entity object, because Entity is an ABC.
     * But it has no special meaning in a world object, so
     * all values get initialised to 0.
     */
    World::World(): Entity({0, 0}, 0), _score(0)
    {
        _worldEntities.push(std::make_shared<BGTile>());
        _worldEntities.push(std::make_shared<PlayerShip>());
    }

    /**
     * empty function because move has no effect on a world object.
     * @param    pos      empty position
     */
    void World::move(const util::Position) {}

    void World::score(const int points)
    {
        if (_score + points <= 0)
            _score = 0;
        else
            _score += points;
    }
}
