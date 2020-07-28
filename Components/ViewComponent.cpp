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

/// update
void ViewComponent::render(sf::RenderWindow *window)
{
	_view.setCenter((_sprite.getPosition().x + _sprite.getLocalBounds().width/2.f),
					(_sprite.getPosition().y + _sprite.getLocalBounds().height/2.f));
	window->setView(_view);

}

