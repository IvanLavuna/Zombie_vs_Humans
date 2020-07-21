//
// Created by ivan on 20.07.20.
//
#include "pch.h"
#include "Entity.h"

/// initialisation
void Entity::initVariables()
{
	initGameTextures();
	_animComponent = nullptr;
	_movementComponent = nullptr;
}

void Entity::initGameTextures()
{
	_gameTextures = new GameTexture("Resource/Textures/");
}


/// constructor / destructor
Entity::Entity()
{
	initVariables();
}

Entity::~Entity()
{

}

/// initialisation of components
void Entity::initAnimComponent()
{

}

void Entity::initMovementComponent()
{

}







