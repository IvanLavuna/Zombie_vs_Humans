//
// Created by ivan on 11.06.20.
//

#include "Game.h"

/// initialisation
void Game::initWindow()
{
	std::ifstream file("Config/Window.init");

	std::string title = "None";
	sf::VideoMode window_bounds(1200,700);
	bool isFullScreen = false;
	unsigned framerate_limit = 120;
	bool vertical_sync_enabled = false;

	if(file.is_open())
	{
		std::getline(file,title);
		file >> window_bounds.width >> window_bounds.height;
		file >> isFullScreen;
		file >> framerate_limit;
		file >> vertical_sync_enabled;
		file.close();
	}
	else
	{
		FileErrorLog log;
		log.openLog("Config/ErrorsFile.log");
		log.writeError("File Window.init is not opened.");
		log.closeLog();
	}

	if(isFullScreen)
		_window = new sf::RenderWindow(window_bounds, title, sf::Style::Fullscreen);
	else
		_window = new sf::RenderWindow(window_bounds, title,sf::Style::Titlebar | sf::Style::Close );

	_window->setFramerateLimit(framerate_limit);
	_window->setVerticalSyncEnabled(vertical_sync_enabled);
}

void Game::initMainMenuState()
{
	_states.push(new MainMenuState(_window,&_states));
}

/// constructors/destructor
Game::Game() : _dt(0)
{
	this->initWindow();
	this->initMainMenuState();
}

Game::~Game()
{
	delete _window;
}

/// update
void Game::update()
{
	this->updateSFMLEvents();
	this->updateEvents();
	this->updateDt();
	this->updateState();
}

void Game::updateSFMLEvents()
{
	while(_window->pollEvent(_event))
	{
		switch (_event.type)
		{
			case sf::Event::Closed:
				_window->close();
				break;

				break;
			default:
				break;
		}
	}
}

void Game::updateEvents()
{

}

void Game::updateDt()
{
	_dt = _clock.getElapsedTime().asSeconds();
	_clock.restart();
}

void Game::updateState()
{
	if(!_states.empty())
	{
		_states.top()->update(_dt);

		/** update mouse positions concerning to screen ,window, view **/
		_states.top()->updateMousePositions();
	}
}

/// render
void Game::render()
{
	this->renderWindow();
	this->renderState();
}

void Game::renderState()
{
	if(!_states.empty())
		_states.top()->render();
}

void Game::renderWindow()
{

}

/// core
void Game::run()
{
	while(_window->isOpen())
	{
		_window->clear(sf::Color(178, 211, 243));

		this->update();
		this->render();

		_window->display();
	}
}

