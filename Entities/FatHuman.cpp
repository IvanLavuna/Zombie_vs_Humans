//
// Created by ivan on 21.07.20.
//
#include "pch.h"
#include "FatHuman.h"


/// initialisation

void FatHuman::initTexture()
{
	_fatHumanTexture = *_gameTextures->getTestingTexture();
}

void FatHuman::initSprite(sf::Vector2f pos)
{
	_sprite.setTexture(_fatHumanTexture);
	_sprite.setTextureRect(sf::IntRect(0, 0, FAT_HUMAN_TEXTURE_FRAME_WIDTH, FAT_HUMAN_TEXTURE_FRAME_HEIGHT));
	_sprite.setPosition(pos);
}

void FatHuman::initAnimationComponent()
{
	createAnimationComponent();
	addAnimation(FAT_HUMAN_ANIMATION_NAME, &_fatHumanTexture, &_sprite, FAT_HUMAN_STANDING_POS_FRAME_X, FAT_HUMAN_STANDING_POS_FRAME_Y,
			FAT_HUMAN_TEXTURE_FRAME_WIDTH, FAT_HUMAN_TEXTURE_FRAME_HEIGHT, FAT_HUMAN_NUMBER_OF_FRAMES);
}

void FatHuman::initMovementComponent(float speed)
{
	createMovementComponent(speed);
}

void FatHuman::initViewComponent(sf::Sprite &sprite, float width, float height)
{
	createViewComponent(sprite,width,height);
}

/// constructor / destructor
FatHuman::FatHuman()
{
	initTexture();
	initSprite();
	initAnimationComponent();
	initMovementComponent();
	initViewComponent(_sprite, FAT_HUMAN_VIEW_WIDTH, FAT_HUMAN_VIEW_HEIGHT);
}

FatHuman::~FatHuman()
{

}

/// core

/// possibilities of Human
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

/// core

/// render
void FatHuman::render(sf::RenderWindow *window)
{
	_animComponent->render(window);
	renderView(window);
}

void FatHuman::renderView(sf::RenderWindow *window)
{
	_viewComponent->render(window);
}
/// update
void FatHuman::update(const float &dt)
{
	_animComponent->play(dt);
}

/// process moves
void FatHuman::updateInput(const float &dt,SummerMap& summerMap)
{
	bool ST = false;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		_animComponent->resetAnimationTextureCoo( FAT_HUMAN_ANIMATION_NAME,
											      FAT_HUMAN_MOVE_LEFT_POS_FRAME_X,
											      FAT_HUMAN_MOVE_LEFT_POS_FRAME_Y,
											      FAT_HUMAN_TEXTURE_FRAME_WIDTH,
											      FAT_HUMAN_TEXTURE_FRAME_HEIGHT);
		moveLeft();
		ST = true;

	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		_animComponent->resetAnimationTextureCoo( FAT_HUMAN_ANIMATION_NAME,
												  FAT_HUMAN_MOVE_UP_POS_FRAME_X,
												  FAT_HUMAN_MOVE_UP_POS_FRAME_Y,
												  FAT_HUMAN_TEXTURE_FRAME_WIDTH,
												  FAT_HUMAN_TEXTURE_FRAME_HEIGHT);
		moveUp();
		ST = true;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		_animComponent->resetAnimationTextureCoo( FAT_HUMAN_ANIMATION_NAME,
												  FAT_HUMAN_MOVE_RIGHT_POS_FRAME_X,
												  FAT_HUMAN_MOVE_RIGHT_POS_FRAME_Y,
												  FAT_HUMAN_TEXTURE_FRAME_WIDTH,
												  FAT_HUMAN_TEXTURE_FRAME_HEIGHT);
		moveRight();
		ST = true;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		_animComponent->resetAnimationTextureCoo( FAT_HUMAN_ANIMATION_NAME,
												  FAT_HUMAN_MOVE_DOWN_POS_FRAME_X,
												  FAT_HUMAN_MOVE_DOWN_POS_FRAME_Y,
												  FAT_HUMAN_TEXTURE_FRAME_WIDTH,
												  FAT_HUMAN_TEXTURE_FRAME_HEIGHT);
		moveDown();
		ST = true;
	}
	if(!ST)
	{
		_animComponent->resetAnimationTextureCoo( FAT_HUMAN_ANIMATION_NAME,
				                                  FAT_HUMAN_STANDING_POS_FRAME_X,
				                                  FAT_HUMAN_STANDING_POS_FRAME_Y,
												  FAT_HUMAN_TEXTURE_FRAME_WIDTH,
												  FAT_HUMAN_TEXTURE_FRAME_HEIGHT);
	}
}

//// problem is here.


