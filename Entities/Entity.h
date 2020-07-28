//
// Created by ivan on 20.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_ENTITY_H
#define ZOMBIE_VS_HUMANS_ENTITY_H

#include "AnimationComponent.h"
#include "MovementComponent.h"
#include "ViewComponent.h"
#include "GameTexture.h"

class Entity
{
private:
	/// initialisation
	void initVariables();
	void initGameTextures();

protected:
	/// variables
	sf::Sprite			 _sprite;
	GameTexture* 		 _gameTextures;

	/// components
	AnimationComponent*  _animComponent;
	MovementComponent*   _movementComponent;
	ViewComponent*		 _viewComponent;

	/// components creation
	void createAnimationComponent();
	void createMovementComponent(float speed = 10.f);
	void createViewComponent(sf::Sprite& sprite, float width, float height);

	/// animation features
	void addAnimation(std::string animName, sf::Texture* textureSheet, sf::Sprite* sprite, float frPosX, float frPosY, float frWidth, float frHeight,
					  unsigned numberOfFrames, PRIORITY priority = PRIORITY::TWO, float speed = 100.f);
	bool removeAnimation(std::string animName);
public:
	/// constructor / destructor
	Entity();
	~Entity();

};


#endif //ZOMBIE_VS_HUMANS_ENTITY_H
