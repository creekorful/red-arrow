#ifndef RED_ARROW_KEBOARDCONTROLLER_H
#define RED_ARROW_KEBOARDCONTROLLER_H

#include <cmath>

#include "../../Majoris/Source/Engine/GameObject/Component.h"

/**
 * represent a human keyboard controller / input
 */
class KeyboardController : public ma::Component
{
public:
    explicit KeyboardController(ma::GameObject* pParent);

    void update(float dt) override;

    void pollEvent(const sf::Event& event) override;

private:
    float m_velocity;
    float m_rotation;
};


#endif //RED_ARROW_KEBOARDCONTROLLER_H
