#ifndef RED_ARROW_GAMEENGINE_H
#define RED_ARROW_GAMEENGINE_H

#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "State/GameState.h"

class GameEngine
{
public:
    /**
     * Instantiate the game engine
     *
     * @param videoMode the window video mode
     * @param title the window title
     */
    GameEngine(const sf::VideoMode& videoMode, const std::string& title);

    /**
     * @return true if the game engine is running
     */
    bool isRunning();

    /**
     * execute the game engine main loop
     */
    void execute();

    /**
     * Set the current / active state
     *
     * @param pState pointer to the state
     */
    void setCurrentState(GameState* pState);

private:
    sf::RenderWindow m_window;
    GameState* m_pState;
    sf::Clock m_deltaClock;
};


#endif //RED_ARROW_GAMEENGINE_H
