cmake_minimum_required(VERSION 3.16)
project(Zombie_vs_Humans)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE Source/main.cpp Source/Game.h Source/Game.cpp ErrorHandling/IErrorLog.cpp ErrorHandling/IErrorLog.h ErrorHandling/FileErrorLog.cpp ErrorHandling/FileErrorLog.h States/MainMenuState.cpp States/MainMenuState.h graphical_interface/gui.cpp graphical_interface/gui.h States/State.cpp States/State.h States/GameState.cpp States/GameState.h Source/GameTexture.cpp Source/GameTexture.h Components/AnimationComponent.cpp Components/AnimationComponent.h Entities/Entity.cpp Entities/Entity.h)
include_directories(ErrorHandling States graphical_interface States)
include_directories(Source Components Animation Entities)

add_executable(Zombie_vs_Humans ${SOURCE})

target_link_libraries(Zombie_vs_Humans
                sfml-audio
                sfml-graphics
                sfml-network
                sfml-system
                sfml-window
                -lboost_system
                -lboost_filesystem)
