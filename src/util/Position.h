#ifndef POSITION_H_
#define POSITION_H_

#include <initializer_list>
#include <cassert>

namespace util
{
	class Position
    {
	public:
        Position();
		Position(const unsigned int, const unsigned int);
        Position(std::initializer_list<unsigned int>);
		unsigned int _x;
		unsigned int _y;
	};
}

#endif
