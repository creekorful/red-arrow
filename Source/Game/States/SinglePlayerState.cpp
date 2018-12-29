#include "SinglePlayerState.h"

SinglePlayerState::SinglePlayerState()
{
    // create player space ship
    m_pGameObjects.push_back(new PlayerSpaceShip(sf::Vector2f(50, 50)));
}

void SinglePlayerState::update(const float dt)
{
    for (auto pGameObject : m_pGameObjects)
    {
        pGameObject->update(dt);
    }
}

void SinglePlayerState::pollEvent(const sf::Event& event)
{
    // handle exit event
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        getEngine()->quit();

    // then dispatch events to game objects
    for (auto pGameObject : m_pGameObjects)
    {
        pGameObject->pollEvent(event);
    }
}

std::string SinglePlayerState::title()
{
    return "RedArrow - SinglePlayer";
}

void SinglePlayerState::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for (auto pGameObject : m_pGameObjects)
    {
        target.draw(*pGameObject, states);
    }
}
