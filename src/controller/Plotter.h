#ifndef PLOTTER_H
#define PLOTTER_H

#include "../model/World.h"
#include "../model/Entity.h"
#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>

namespace tysfml
{
    class Plotter
    {
    public:
        Plotter(const std::unique_ptr<ty::Entity>&);
    private:
    };
} /* namespace tysfml */

#endif
