#include "Application.h"

Application::Application(int argc, char** argv) : m_gameEngine(sf::VideoMode(800, 600), "RedArrow 0.1 !")
{

}

int Application::execute()
{
    while (m_gameEngine.isRunning())
    {

    }

    return 0;
}
