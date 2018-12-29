#include "SpaceShip.h"

SpaceShip::SpaceShip(const sf::Vector2f& position, const sf::Color& color)
{
    // set shape details
    m_shape.setPointCount(4);
    m_shape.setPoint(0, sf::Vector2f( 12.f,   0.f));
    m_shape.setPoint(1, sf::Vector2f(- 6.f,  11.f));
    m_shape.setPoint(2, sf::Vector2f(  0.f,   0.f));
    m_shape.setPoint(3, sf::Vector2f(- 6.f, -11.f));

    // set game object position
    setPosition(position);

    // set color
    m_shape.setFillColor(sf::Color::Transparent);
    m_shape.setOutlineThickness(1);
    m_shape.setOutlineColor(color);
}

void SpaceShip::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    target.draw(m_shape, states);
}
