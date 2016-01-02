#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <SFML/Graphics.hpp>
#include <iostream>

/*
 * Singleton class:
 * For desgin considerations see:
 * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */
class Keyboard
{
public:
    static Keyboard& getKeyboard()
    {
        static Keyboard instance;
        return instance;
    }
    int processKeys(sf::Event&) const;
private:
    Keyboard() {};
    Keyboard(const Keyboard&) = delete;
    Keyboard& operator=(const Keyboard&) = delete;
};

#endif
