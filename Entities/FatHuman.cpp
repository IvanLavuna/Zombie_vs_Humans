//
// Created by ivan on 21.07.20.
//
#include "pch.h"
#include "FatHuman.h"


/// initialisation

void FatHuman::initTexture()
{
	_fatHumanTexture = *_gameTextures->getFatHumanTexture();
}

void FatHuman::initSprite(sf::Vector2f pos)
{
	_sprite.setTexture(_fatHumanTexture);
	_sprite.setTextureRect(sf::IntRect(0,0,_fatHumanTexture.getSize().y,_fatHumanTexture.getSize().y));
	_sprite.setPosition(pos);
}
void FatHuman::initAnimationComponent()
{
	createAnimationComponent();
	addAnimation("fat_human_anim.png",&_fatHumanTexture,&_sprite,0.f,0.f,30.f,30.f,5);
}

void FatHuman::initMovementComponent(float speed)
{
	createMovementComponent(speed);
}

/// constructor / destructor
FatHuman::FatHuman()
{
	initTexture();
	initSprite();
	initAnimationComponent();
	initMovementComponent();
}

FatHuman::~FatHuman()
{

}

/// core

/// possibilities of fatHuman
void FatHuman::moveRight()
{
	_movementComponent->moveRight();
}

void FatHuman::moveLeft()
{
	_movementComponent->moveLeft();
}

void FatHuman::moveDown()
{
	_movementComponent->moveDown();
}

void FatHuman::moveUp()
{
	_movementComponent->moveUp();
}

void FatHuman::render(sf::RenderWindow *window)
{
	_animComponent->render(window);
}

void FatHuman::update(const float &dt)
{
	_animComponent->play(dt);
}

void FatHuman::updateInput(const float &dt)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		moveLeft();
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		moveUp();
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		moveRight();
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		moveDown();
	}
}

