#ifndef RED_ARROW_SPACESHIP_H
#define RED_ARROW_SPACESHIP_H


#include "../../Engine/GameObject/GameObject.h"

class SpaceShip : public GameObject
{
public:
    explicit SpaceShip(const sf::Vector2f& position);

protected:

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //RED_ARROW_SPACESHIP_H
