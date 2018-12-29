#ifndef RED_ARROW_SPACESHIP_H
#define RED_ARROW_SPACESHIP_H

#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/ConvexShape.hpp>

#include "../../Engine/GameObject/GameObject.h"

class SpaceShip : public GameObject
{
public:
    explicit SpaceShip(const sf::Vector2f& position, const sf::Color& color);

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::ConvexShape m_shape;
};


#endif //RED_ARROW_SPACESHIP_H
