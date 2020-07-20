//
// Created by ivan on 13.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_STATE_H
#define ZOMBIE_VS_HUMANS_STATE_H

#include "GameTexture.h"

class State
{
protected:

	/// variables
	sf::RenderWindow* _window;
	std::stack<State*>* _states;

	/// mouse positions
	sf::Vector2i _mousePosScreen;
	sf::Vector2i _mousePosWindow;
	sf::Vector2f _mousePosView;

	/** here all textures are saved */
	GameTexture _textures;

public:
	State(sf::RenderWindow* window,	std::stack<State*>* states);
	virtual ~State();

	/// functions
	/** to save or do something like that **/
	virtual void endState() = 0;

	/// update
	virtual void updateMousePositions();
	virtual void updateInput(const float& dt) = 0;
	virtual void update(const float& dt) = 0;

	/// render
	virtual void render() = 0;
};


#endif //ZOMBIE_VS_HUMANS_STATE_H
