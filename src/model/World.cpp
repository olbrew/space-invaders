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

namespace si {
namespace model {

    /**
     * Creates a world with its entities.
     * Must make a entity object, because Entity is an ABC.
     * But it has no special meaning in a world object, so
     * all values get initialised to 0.
     */
    World::World()
        : _ps(std::make_shared<PlayerShip>())
        , _score(0)
    {
        _worldEntities.push_back(_ps);
    }

    /**
     * empty function because move has no effect on a world object.
     * @param    pos      empty position
     */
    void World::move(const util::Position) {}

    void World::update() {}

    /**
     * Change score in this particular level.
     * @param   points     How many points to add or subtract.
     */
    void World::score(const int points)
    {
        if (_score + points <= 0)
            _score = 0;
        else
            _score += points;
    }

    /**
     * Return pointer to the playership of this world.
     */
    std::shared_ptr<PlayerShip> World::getPS() const { return _ps; }

    std::deque<std::shared_ptr<Entity> > World::getEntities()
    {
        return _worldEntities;
    }

} /* namespace model */
} /* namespace si */
