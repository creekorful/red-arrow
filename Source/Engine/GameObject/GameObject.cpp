#include "GameObject.h"

void GameObject::update(float dt)
{
    for (auto component : m_pComponents)
    {
        component->update(dt);
    }
}

GameObject::~GameObject()
{
    for (auto component : m_pComponents)
    {
        delete component;
    }
}
