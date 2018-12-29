#include "PlayerSpaceShip.h"
#include "../Components/KeyboardController.h"

PlayerSpaceShip::PlayerSpaceShip(const sf::Vector2f& position) : SpaceShip(position, sf::Color::Red)
{
    add(new KeyboardController(this));
}
