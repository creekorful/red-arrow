#include "Application.h"

Application::Application(int argc, char** argv) : m_gameEngine("RedArrow 0.1 !")
{
}

int Application::execute()
{
    // set game initial state
    m_gameEngine.setCurrentState(&SinglePlayerState::instance());

    while (m_gameEngine.isRunning())
    {
        m_gameEngine.execute();
    }

    return 0;
}
