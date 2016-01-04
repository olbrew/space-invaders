#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.hpp>
#include <memory>

namespace tysfml {
class Window {
public:
    Window();
    ~Window();
    std::shared_ptr<sf::RenderWindow> get();

private:
    std::shared_ptr<sf::RenderWindow> _window;
};
} /* namespace tysfml */

#endif
