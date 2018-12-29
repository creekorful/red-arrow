#include "SinglePlayerState.h"

SinglePlayerState::SinglePlayerState() : m_playerShip(sf::Vector2f(50, 50))
{
}

void SinglePlayerState::update(const float dt)
{
    m_playerShip.update(dt);
}

void SinglePlayerState::pollEvent(const sf::Event& event)
{
    // handle exit event
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        getEngine()->quit();

    // then dispatch events to game object
    m_playerShip.pollEvent(event);
}

std::string SinglePlayerState::title()
{
    return "RedArrow - SinglePlayer";
}

void SinglePlayerState::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_playerShip, states);
}
