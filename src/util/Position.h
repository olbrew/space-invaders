#ifndef POSITION_H_
#define POSITION_H_

namespace util
{
	class Position
    {
	public:
        Position();
		Position(const unsigned int, const unsigned int);
	private:
		unsigned int _x;
		unsigned int _y;
	};
}

#endif
