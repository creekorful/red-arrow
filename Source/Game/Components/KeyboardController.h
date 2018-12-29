#ifndef RED_ARROW_KEBOARDCONTROLLER_H
#define RED_ARROW_KEBOARDCONTROLLER_H


#include "../../Engine/GameObject/Component.h"

/**
 * represent a human keyboard controller / input
 */
class KeyboardController : public Component
{
public:
    explicit KeyboardController(GameObject* pParent);

    void update(float dt) override;

    void pollEvent(const sf::Event& event) override;

private:
    sf::Vector2f m_velocity;
};


#endif //RED_ARROW_KEBOARDCONTROLLER_H
