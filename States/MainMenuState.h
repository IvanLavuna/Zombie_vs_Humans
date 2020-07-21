//
// Created by ivan on 13.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_MAINMENUSTATE_H
#define ZOMBIE_VS_HUMANS_MAINMENUSTATE_H

#include "gui.h"
#include "FileErrorLog.h"
#include "AnimationComponent.h"
#include "State.h"

class MainMenuState : public State
{
private:
	/// variables
	std::vector<gui::Button*> _buttons;

	sf::Text 				  _nameOfTheGame;
	sf::Font 			      _font;

	/// initialisation
	void initButtons();
	void initNameOfTheGame();

public:

	/// constructor/destructor
	MainMenuState(sf::RenderWindow* window , std::stack<State*>* states);
	~MainMenuState() override;

	/// functions
	void endState() override;

	/// update
	void updateInput(const float& dt) override;
	void update(const float& dt) override;
	void updateButtons(const float& dt);

	/// render
	void render() override;
	void renderButtons();
	void renderNameOfTheGame();
};


#endif //ZOMBIE_VS_HUMANS_MAINMENUSTATE_H
