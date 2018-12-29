#include "KeyboardController.h"

KeyboardController::KeyboardController(GameObject* pParent) : Component(pParent)
{
    m_velocity = sf::Vector2f(0, 0);
}

void KeyboardController::update(float dt)
{
    getParent()->move(m_velocity * dt);
}

void KeyboardController::pollEvent(const sf::Event& event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::D)
            m_velocity.x += 1.f;
        else if (event.key.code == sf::Keyboard::Q)
            m_velocity.x -= 1.f;
    }
}
