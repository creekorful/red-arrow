#include "GameEngine.h"

GameEngine::GameEngine(const sf::VideoMode& videoMode, const std::string& title) : m_window(videoMode, title)
{
    m_window.setFramerateLimit(60);
    m_pState = nullptr;
}

bool GameEngine::isRunning()
{
    return m_window.isOpen();
}

void GameEngine::execute()
{
    // first of all poll events
    sf::Event event{};
    while (m_window.pollEvent(event))
    {
        // manage window quit event
        if (event.type == sf::Event::Closed)
        {
            quit();
        }

        m_pState->pollEvent(event);
    }

    // clear window
    m_window.clear();

    // then update physics for current state
    sf::Time dt = m_deltaClock.restart();
    m_pState->update(dt.asSeconds());

    // finally render state to screen
    m_window.draw(*m_pState);

    // render everything to the screen
    m_window.display();
}

void GameEngine::setCurrentState(GameState* pState)
{
    m_pState = pState;
    m_pState->setGameEngine(this);

    // override window title if any
    if (pState->title().empty())
    {
        m_window.setTitle(pState->title());
    }
}

void GameEngine::quit()
{
    m_window.close();
}
