#include "SinglePlayerState.h"

SinglePlayerState::SinglePlayerState() : m_ship(sf::Vector2f(50, 50), sf::Color::Red)
{

}

void SinglePlayerState::update(const float dt)
{
    m_ship.move(sf::Vector2f(15, 15) * dt);
}

void SinglePlayerState::pollEvent(const sf::Event& event)
{

}

std::string SinglePlayerState::title()
{
    return "RedArrow - SinglePlayer";
}

void SinglePlayerState::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_ship, states);
}
