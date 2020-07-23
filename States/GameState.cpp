//
// Created by ivan on 15.07.20.
//
#include "pch.h"
#include "GameState.h"

/// initialisation
void GameState::initFatHuman()
{
	_fatHuman = new FatHuman();
}


/// constructor/destructor
GameState::GameState(sf::RenderWindow* window, std::stack<State*>* states):
State(window, states)
{
	initFatHuman();
}

GameState::~GameState()
{
	delete _fatHuman;
}

/// functions
void GameState::endState()
{

}

/// update
void GameState::update(const float &dt)
{
	updateFatHuman(dt);
	updateInput(dt);
}
void GameState::updateFatHuman(const float &dt)
{
	_fatHuman->update(dt);
}


void GameState::updateInput(const float &dt)
{
	_fatHuman->handleInput();
}


/// render
void GameState::render()
{
	_fatHuman->render(_window);
}



