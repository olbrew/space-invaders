#include "BGTile.h"

namespace ty {
BGTile::BGTile()
    : Entity({ 0, 0 }, 0)
{
}

/**
 * empty function because move has no effect on a bgTile object.
 * @param    pos      empty position
 */
void BGTile::move(const util::Position) {}
}
