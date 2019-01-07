#ifndef RED_ARROW_SINGLEPLAYERSTATE_H
#define RED_ARROW_SINGLEPLAYERSTATE_H


#include <vector>

#include "../../Majoris/Source/Engine/State/GameState.h"
#include "../../Majoris/Source/Engine/GameObject/GameObject.h"

#include "../GameObjects/PlayerSpaceShip.h"
#include "../GameObjects/EnemySpaceShip.h"

/**
 * State that represent single player mode
 */
class SinglePlayerState : public ma::GameState
{
public:

    void update(float dt) override;

    void pollEvent(const sf::Event& event) override;

    std::string title() override;

    static SinglePlayerState& instance()
    {
        static SinglePlayerState instance;
        return instance;
    }

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

    void initialize() override;

private:

    std::vector<ma::GameObject*> m_pGameObjects;
};


#endif //RED_ARROW_SINGLEPLAYERSTATE_H
