#ifndef RED_ARROW_SINGLEPLAYERSTATE_H
#define RED_ARROW_SINGLEPLAYERSTATE_H


#include "../../Engine/State/GameState.h"
#include "../GameObjects/SpaceShip.h"

/**
 * State that represent single player mode
 */
class SinglePlayerState : public GameState
{
public:
    SinglePlayerState();

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

private:
    SpaceShip m_ship;
};


#endif //RED_ARROW_SINGLEPLAYERSTATE_H
