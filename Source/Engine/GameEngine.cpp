#include "GameEngine.h"

GameEngine::GameEngine(sf::VideoMode videoMode, const std::string& title) : m_window(videoMode, title)
{
    m_window.setFramerateLimit(60);
}

bool GameEngine::isRunning()
{
    return m_window.isOpen();
}
