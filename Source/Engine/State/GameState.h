#ifndef RED_ARROW_GAMESTATE_H
#define RED_ARROW_GAMESTATE_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Window/Event.hpp>

/**
 * A game state can be pause menu main menu single player mode etc...
 */
class GameState : public sf::Drawable
{
public:
    /**
     * Update game state physics using given delta time
     * useful if physics should be computed
     *
     * @param dt the time passed
     */
    virtual void update(float dt) = 0;

    /**
     * Poll event received from window
     *
     * @param event the event to poll / process
     */
    virtual void pollEvent(const sf::Event& event) = 0;

protected:
    /**
     * Draw the state to the render target
     *
     * @param target the render target
     * @param states rend states to be used
     */
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override = 0;
};


#endif //RED_ARROW_GAMESTATE_H
