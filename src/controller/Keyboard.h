#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <SFML/System.hpp>

namespace tysfml
{
    enum class Keys {enter, esc, space, left, right, up, down};

    class Keyboard
    {
    // For design considerations see:
    // https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
    public:
        static Keyboard& getKeyboard()
        {
            static Keyboard instance;
            return instance;
        }
                
    private:
        Keyboard() {};
        Keyboard(const Keyboard&);
        Keyboard& operator=(const Keyboard&);
    };
} /* namespace tysfml */

#endif
