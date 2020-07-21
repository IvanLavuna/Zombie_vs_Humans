//
// Created by ivan on 20.07.20.
//
#include "pch.h"
#include "MovementComponent.h"

/// constructor / destructor
MovementComponent::MovementComponent(sf::Sprite* sprite, float speed):
	_sprite(*sprite),
	_speed(speed)
{

}

MovementComponent::~MovementComponent()
= default;

/// core functions
void MovementComponent::moveLeft()
{
	_sprite.move(-_speed * 0.01f,0.f);
}

void MovementComponent::moveRight()
{
	_sprite.move(_speed * 0.01f,0.f);
}

void MovementComponent::moveUp()
{
	_sprite.move(0.f,-_speed * 0.01f);

}

void MovementComponent::moveDown()
{
	_sprite.move(0.f,_speed * 0.01f);

}

void MovementComponent::move(float offsetX, float offsetY)
{
	_sprite.move(_speed * offsetX,_speed * offsetY);
}

void MovementComponent::setPosition(float posX, float posY)
{
	_sprite.setPosition(posX,posY);
}





