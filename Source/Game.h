//
// Created by ivan on 11.06.20.
//

#ifndef BALLS_GAME_H
#define BALLS_GAME_H


#include "MainMenuState.h"
#include "FileErrorLog.h"



class Game
{
private:
	/// variables
	sf::RenderWindow* _window;
	sf::Event _event;

	sf::Clock _clock;
	float _dt;

	std::stack<State*> _states;

	/// initialisation
	void initWindow();
	void initMainMenuState();

public:
	/// constructors/destructor
	Game();
	~Game();

	/// update
	void update();
	void updateSFMLEvents();
	void updateEvents();
	void updateDt();
	void updateState();

	/// render
	void render();
	void renderState();
	void renderWindow();

	/// core
	void run();
};


#endif //BALLS_GAME_H
