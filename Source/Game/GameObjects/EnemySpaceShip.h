#ifndef RED_ARROW_ENEMYSPACESHIP_H
#define RED_ARROW_ENEMYSPACESHIP_H

#include "SpaceShip.h"

/**
 * Represent an IA controlled space ship
 */
class EnemySpaceShip : public SpaceShip
{
public:
    EnemySpaceShip(const sf::Vector2f& position, const sf::Color& color);
};


#endif //RED_ARROW_ENEMYSPACESHIP_H
