/**
 * @file
 *      Small class which can hold 2 objects of the same type.
 *      Handy for grid positions or object sizes in 2D fields.
 *
 * @author
 *      Olivier Brewaeys
 */

#ifndef VECTOR2D_H_
#define VECTOR2D_H_

namespace util {

template <typename T> class Vector2D {
public:
    /**
     * The x and y values are public to give easier access for
     * outside funtions. Accessors and mutators are not really
     * necessary
     */
    T x;
    T y;

    /**
     * Initialise with given x and y or defaults of 0
     *
     * @param     x     x-value
     * @param     y     y-value
     */
    explicit Vector2D(const T i_x = 0, const T i_y = 0)
        : x(i_x)
        , y(i_y)
    {
    }
};
}

#endif
