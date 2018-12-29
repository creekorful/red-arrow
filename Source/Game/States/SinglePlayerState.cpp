#include "SinglePlayerState.h"

SinglePlayerState::SinglePlayerState() : m_ship(sf::Vector2f(50, 50), sf::Color::Red)
{
    m_ship.add(new KeyboardController(&m_ship));
}

void SinglePlayerState::update(const float dt)
{
    m_ship.update(dt);
}

void SinglePlayerState::pollEvent(const sf::Event& event)
{
    // handle exit event
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        getEngine()->quit();

    // then dispatch events to game object
    m_ship.pollEvent(event);
}

std::string SinglePlayerState::title()
{
    return "RedArrow - SinglePlayer";
}

void SinglePlayerState::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_ship, states);
}
