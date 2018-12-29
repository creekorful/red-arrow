#include "SpaceShip.h"

SpaceShip::SpaceShip(const sf::Vector2f& position)
{
    setPosition(position);
}

void SpaceShip::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    // todo draw
}
