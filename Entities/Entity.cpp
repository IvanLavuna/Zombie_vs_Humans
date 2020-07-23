//
// Created by ivan on 20.07.20.
//
#include "pch.h"
#include "Entity.h"

/// initialisation
void Entity::initVariables()
{
	_animComponent = nullptr;
	_movementComponent = nullptr;
}

void Entity::initGameTextures()
{
	_gameTextures = new GameTexture("Resource/Textures/");
	_gameTextures->loadGameTextures();
}

/// constructor / destructor
Entity::Entity()
{
	initVariables();
	initGameTextures();
}

Entity::~Entity()
{
	delete _gameTextures;
	delete _animComponent;
	delete _movementComponent;
}

/// components functions
void Entity::createAnimationComponent()
{
	_animComponent = new AnimationComponent();
}

void Entity::createMovementComponent(float speed)
{
	_movementComponent = new MovementComponent(&_sprite,speed);
}

void Entity::addAnimation(std::string animName, sf::Texture* textureSheet, sf::Sprite* sprite, float frPosX, float frPosY, float frWidth, float frHeight,
						  unsigned numberOfFrames, PRIORITY priority, float speed)
{
	_animComponent->addAnimation(std::move(animName),textureSheet,sprite,frPosX,frPosY,frWidth,frHeight,numberOfFrames,priority,speed);
}

bool Entity::removeAnimation(std::string animName)
{
	return _animComponent->removeAnimation(std::move(animName));
}







