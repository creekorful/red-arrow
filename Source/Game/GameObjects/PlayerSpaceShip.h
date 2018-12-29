#ifndef RED_ARROW_PLAYERSPACESHIP_H
#define RED_ARROW_PLAYERSPACESHIP_H

#include "SpaceShip.h"

/**
 * Represent the space ship controlled by the human
 */
class PlayerSpaceShip : public SpaceShip
{
public:
    explicit PlayerSpaceShip(const sf::Vector2f& position);

};


#endif //RED_ARROW_PLAYERSPACESHIP_H
