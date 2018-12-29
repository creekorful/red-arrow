#include "GameState.h"

void GameState::setGameEngine(GameEngine* pGameEngine)
{
    m_pGameEngine = pGameEngine;
}

GameEngine* GameState::getEngine()
{
    return m_pGameEngine;
}
