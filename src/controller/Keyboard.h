/**
 * @file
 *      Singleton Keyboard class for processing keyboard input.
 * @author
 *      Olivier Brewaeys
 *
 * This class is a singleton keyboard which has the single purpose of processing
 * keyboard input event for our game.
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include <SFML/Graphics.hpp>

/*
 * Singleton class:
 * For desgin considerations see:
 * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */
namespace si {
namespace controller {

    class Keyboard {
    public:
        static Keyboard& getKeyboard()
        {
            static Keyboard instance;
            return instance;
        }

        int processKeys(sf::Event&) const;

    private:
        Keyboard(){};
        Keyboard(const Keyboard&) = delete;
        Keyboard& operator=(const Keyboard&) = delete;
    };

} /* namespace controller */
} /* namespace si */

#endif
