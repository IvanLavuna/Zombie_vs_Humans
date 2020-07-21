//
// Created by ivan on 13.07.20.
//
#include "pch.h"
#include "MainMenuState.h"


/// initialisation

void MainMenuState::initButtons()
{
	unsigned w = _window->getSize().x, h = _window->getSize().y;
	float const_w = static_cast<float>(w)/20.f,const_h = static_cast<float>(h)/9.f;

	auto* new_btn1 = new gui::Button(const_w * 1.5f,const_h * 2.7f,const_w*6,const_h/1.25f,"play",
			sf::Color(162,211,216),sf::Color(82,132,138),sf::Color(33,85,91));

	auto* new_btn2 = new gui::Button(const_w*1.5f,const_h * 4.4f,const_w*6,const_h/1.25f,"settings",
									 sf::Color(162,211,216),sf::Color(82,132,138),sf::Color(33,85,91));

	auto* new_btn3 = new gui::Button(const_w*1.5f,const_h * 6.1f,const_w*6,const_h/1.25f,"how to play",
									 sf::Color(162,211,216),sf::Color(82,132,138),sf::Color(33,85,91));

	auto* new_btn4 = new gui::Button(const_w*1.5f,const_h * 7.8f,const_w*6,const_h/1.25f,"exit",
									 sf::Color(162,211,216),sf::Color(82,132,138),sf::Color(33,85,91));

	_buttons.push_back(new_btn1);
	_buttons.push_back(new_btn2);
	_buttons.push_back(new_btn3);
	_buttons.push_back(new_btn4);
}

void MainMenuState::initNameOfTheGame()
{
	if(!_font.loadFromFile("Resource/Fonts/Amatic-Bold.ttf"))
	{
		FileErrorLog log;
		log.openLog("Config/ErrorsFile.log");
		log.writeError("File Resource/Fonts/Amatic-Bold.ttf in file \"MainMenuState\" is not opened\n");
		log.closeLog();
	}

	float constW = static_cast<float>(_window->getSize().x)/8.f;
	float constH = static_cast<float>(_window->getSize().y)/50.f;

	_nameOfTheGame.setFont(_font);
	_nameOfTheGame.setCharacterSize(_window->getSize().y/7);
	_nameOfTheGame.setFillColor(sf::Color(70,76,105));
	_nameOfTheGame.setString("Z o m b i e  vs  H u m a n s");
	_nameOfTheGame.setPosition(constW,constH);
	_nameOfTheGame.setScale(1.3,1.5);
}


/// constructor/destructor
MainMenuState::MainMenuState(sf::RenderWindow *window, std::stack<State *> *states) : State(window, states)
{
	initButtons();
	initNameOfTheGame();
}

MainMenuState::~MainMenuState()
{
}

/// functions
void MainMenuState::endState()
{

}

/// update
void MainMenuState::update(const float &dt)
{
	this->updateButtons(dt);
}

void MainMenuState::updateInput(const float &dt)
{

}

void MainMenuState::updateButtons(const float &dt)
{
	for(auto item: _buttons)
		item->update(_mousePosView);
}

/// render
void MainMenuState::render()
{
	this->renderButtons();
	this->renderNameOfTheGame();
}

void MainMenuState::renderButtons()
{
	for(auto item: _buttons)
		item->render(_window);
}

void MainMenuState::renderNameOfTheGame()
{
	_window->draw(_nameOfTheGame);
}







