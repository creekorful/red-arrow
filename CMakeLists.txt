cmake_minimum_required(VERSION 3.9)
project(red_arrow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules)

find_package(SFML REQUIRED COMPONENTS graphics window system)

include_directories(${SFML_INCLUDE_DIR})

add_executable(red_arrow Source/main.cpp Source/Game/Application.cpp Source/Game/Application.h Source/Engine/GameEngine.cpp Source/Engine/GameEngine.h Source/Engine/State/GameState.cpp Source/Engine/State/GameState.h Source/Game/States/SinglePlayerState.cpp Source/Game/States/SinglePlayerState.h Source/Engine/GameObject/GameObject.cpp Source/Engine/GameObject/GameObject.h Source/Engine/GameObject/Component.cpp Source/Engine/GameObject/Component.h Source/Engine/Common/Updateable.h Source/Game/GameObjects/SpaceShip.cpp Source/Game/GameObjects/SpaceShip.h Source/Game/Components/KeyboardController.cpp Source/Game/Components/KeyboardController.h Source/Game/GameObjects/PlayerSpaceShip.cpp Source/Game/GameObjects/PlayerSpaceShip.h)

target_link_libraries(red_arrow ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})