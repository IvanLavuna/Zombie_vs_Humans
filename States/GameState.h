//
// Created by ivan on 15.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_GAMESTATE_H
#define ZOMBIE_VS_HUMANS_GAMESTATE_H

#include "State.h"
#include "FatHuman.h"

class GameState : public State
{
private:
	/// variables

	FatHuman* 	_fatHuman;

	/// initialisation
	void initFatHuman();

public:
	/// constructor/destructor
	GameState(sf::RenderWindow* window, std::stack<State*>* states);
	~GameState() override;

	/// functions
	void endState() override;

	/// update
	void updateInput(const float&dt) override;
	void update(const float& dt) override;
	void updateFatHuman(const float& dt);

	/// render
	void render() override;


};


#endif //ZOMBIE_VS_HUMANS_GAMESTATE_H
