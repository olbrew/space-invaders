#ifndef GAME_H
#define GAME_H

#include "../model/World.h"
#include "../view/Window.h"
#include "Stopwatch.h"
#include "Keyboard.h"
#include <SFML/Graphics.hpp>
#include <memory>
#include <queue>
#include <iostream>

class Game {
public:
    Game();
    void setup();
    void run();
    void update();

    bool isPaused() const;
    void resume();
    void pause();

private:
    void playDefaultLevel();
    void pollEvents();
    void processInput(sf::Event&);

    bool _paused;
    bool _running;
    std::shared_ptr<ty::World> _world;
    std::shared_ptr<tysfml::Window> _window;
};

#endif
