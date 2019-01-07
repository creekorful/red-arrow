#include "KeyboardController.h"

KeyboardController::KeyboardController(ma::GameObject* pParent) : Component(pParent)
{
    m_velocity = 0.f;
}

void KeyboardController::update(float dt)
{
    // Apply rotation
    getParent()->rotate(m_rotation * dt);
    m_rotation = 0.f;

    // Apply translation (todo upgrade)
    getParent()->move(cosf((float) (getParent()->getRotation()*M_PI/180.f)) * m_velocity * dt,
                       sinf((float) (getParent()->getRotation()*M_PI/180.f)) * m_velocity * dt);
}

void KeyboardController::pollEvent(const sf::Event& event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Q)
            m_rotation -= .70f;
        if (event.key.code == sf::Keyboard::D)
            m_rotation += .70f;
        if (event.key.code == sf::Keyboard::Z)
            m_velocity += .15f;
        if (event.key.code == sf::Keyboard::S)
            m_velocity -= .15f;
    }
}
