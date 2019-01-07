#ifndef RED_ARROW_APPLICATION_H
#define RED_ARROW_APPLICATION_H

#include "States/SinglePlayerState.h"
#include "../Majoris/Source/Engine/GameEngine.h"

/**
 * Represent the game
 */
class Application
{
public:
    Application(int argc, char** argv);

    int execute();

private:
    ma::GameEngine m_gameEngine;
};


#endif //RED_ARROW_APPLICATION_H
