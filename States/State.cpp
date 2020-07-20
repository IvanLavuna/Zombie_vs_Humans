//
// Created by ivan on 13.07.20.
//

#include "State.h"

/// constructors/destructors
State::State(sf::RenderWindow* window,	std::stack<State*>* states):
/** path were all textures are contained **/
_textures("Resource/Textures/")
{
	/** function to load all game textures**/
	_textures.loadGameTextures();

	_window = window;
	_states = states;
}

State::~State()
{
}

/// functions

/// update
void State::updateMousePositions()
{
	_mousePosScreen = sf::Mouse::getPosition();
	_mousePosWindow = sf::Mouse::getPosition(*_window);
	_mousePosView = _window->mapPixelToCoords(sf::Mouse::getPosition(*_window));
}