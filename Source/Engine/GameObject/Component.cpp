#include "Component.h"

Component::Component(GameObject* pParent)
{
    m_pParent = pParent;
}

Component::~Component()
= default;

void Component::update(const float dt)
{

}
