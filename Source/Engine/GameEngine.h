#ifndef RED_ARROW_GAMEENGINE_H
#define RED_ARROW_GAMEENGINE_H

#include <SFML/Window/VideoMode.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class GameEngine
{
public:
    /**
     * Instantiate the game engine
     *
     * @param videoMode the window video mode
     * @param title the window title
     */
    GameEngine(sf::VideoMode videoMode, const std::string& title);

    /**
     * @return true if the game engine is running
     */
    bool isRunning();

private:
    sf::RenderWindow m_window;
};


#endif //RED_ARROW_GAMEENGINE_H
