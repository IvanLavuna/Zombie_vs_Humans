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

void GameState::initSummerMap()
{
	_summerMap = new SummerMap();
}

/// constructor/destructor
GameState::GameState(sf::RenderWindow* window, std::stack<State*>* states):
State(window, states)
{
	initFatHuman();
	initSummerMap();
}

GameState::~GameState()
{
	delete _fatHuman;
	delete _summerMap;
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

/// update Input
void GameState::updateInput(const float &dt)
{
	updateFatHumanInput(dt);
}

void GameState::updateFatHumanInput(const float &dt)
{
	_fatHuman->updateInput(dt,*_summerMap);
}

/// render
void GameState::render()
{
	renderSummerMap();
	renderFatHuman();
}

void GameState::renderFatHuman()
{
	_fatHuman->render(_window);
}

void GameState::renderSummerMap()
{
	_summerMap->render(_window);
}



