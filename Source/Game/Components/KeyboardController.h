#ifndef RED_ARROW_KEBOARDCONTROLLER_H
#define RED_ARROW_KEBOARDCONTROLLER_H


#include "../../Engine/GameObject/Component.h"

class KeyboardController : public Component
{
public:
    KeyboardController(GameObject* pParent);

    void update(float dt) override;

    void pollEvent(const sf::Event& event) override;
};


#endif //RED_ARROW_KEBOARDCONTROLLER_H
