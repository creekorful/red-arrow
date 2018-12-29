#ifndef RED_ARROW_SINGLEPLAYERSTATE_H
#define RED_ARROW_SINGLEPLAYERSTATE_H


#include <vector>

#include "../../Engine/State/GameState.h"
#include "../GameObjects/PlayerSpaceShip.h"
#include "../GameObjects/EnemySpaceShip.h"

/**
 * State that represent single player mode
 */
class SinglePlayerState : public GameState
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

    std::vector<GameObject*> m_pGameObjects;
};


#endif //RED_ARROW_SINGLEPLAYERSTATE_H
