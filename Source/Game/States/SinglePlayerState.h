#ifndef RED_ARROW_SINGLEPLAYERSTATE_H
#define RED_ARROW_SINGLEPLAYERSTATE_H


#include "../../Engine/State/GameState.h"

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
};


#endif //RED_ARROW_SINGLEPLAYERSTATE_H
