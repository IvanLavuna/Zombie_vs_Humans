//
// Created by ivan on 15.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_GAMESTATE_H
#define ZOMBIE_VS_HUMANS_GAMESTATE_H

#include "State.h"

class GameState : public State
{
private:
	/// variables



	/// initialisation

public:
	/// constructor/destructor
	GameState(sf::RenderWindow* window, std::stack<State*>* states);
	virtual ~GameState();

	/// update
	void updateInput(const float&dt) override;
	void update(const float& dt) override;

	/// render
	void render() override;


};


#endif //ZOMBIE_VS_HUMANS_GAMESTATE_H
