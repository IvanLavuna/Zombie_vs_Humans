//
// Created by ivan on 24.07.20.
//
#include "pch.h"
#include "ViewComponent.h"


/// constructor/destructor
ViewComponent::ViewComponent(sf::Sprite& sprite, float width, float height):
	_sprite(sprite)
{
	_view.setSize(width,height);
}

ViewComponent::~ViewComponent()
{}

/// render
void ViewComponent::render(sf::RenderWindow *window)
{
	/** remake all this later **/
	float spr_posX = (_sprite.getPosition().x + _sprite.getGlobalBounds().width  / 2.f);
	float spr_posY = (_sprite.getPosition().y + _sprite.getGlobalBounds().height / 2.f);

	if ( (spr_posX - _view.getSize().x / 2 < 0                   &&  spr_posY - _view.getSize().y / 2 < 0) ||
	     (spr_posX + _view.getSize().x / 2 > window->getSize().x &&  spr_posY + _view.getSize().y / 2 > window->getSize().y ) ||
	     (spr_posX - _view.getSize().x / 2 < 0                   &&  spr_posY + _view.getSize().y / 2 > window->getSize().y ) ||
	     (spr_posX + _view.getSize().x / 2 > window->getSize().x &&  spr_posY - _view.getSize().y / 2 < 0 ))
	{
		return;
	}
	else if (spr_posX - _view.getSize().x / 2 < 0 || spr_posX + _view.getSize().x / 2 > window->getSize().x)
	{
		_view.setCenter(_view.getCenter().x,
						(_sprite.getPosition().y + _sprite.getGlobalBounds().height / 2.f));
	}
	else if (spr_posY - _view.getSize().y / 2 < 0 || spr_posY + _view.getSize().y / 2 > window->getSize().y)
	{
		_view.setCenter((_sprite.getPosition().x + _sprite.getGlobalBounds().width / 2.f),
						_view.getCenter().y);
	}
	else
	{
		_view.setCenter((_sprite.getPosition().x + _sprite.getGlobalBounds().width / 2.f),
						(_sprite.getPosition().y + _sprite.getGlobalBounds().height / 2.f));
	}
	window->setView(_view);

}

