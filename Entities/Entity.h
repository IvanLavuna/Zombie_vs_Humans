//
// Created by ivan on 20.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_ENTITY_H
#define ZOMBIE_VS_HUMANS_ENTITY_H

#include "AnimationComponent.h"
#include "MovementComponent.h"
#include "GameTexture.h"
/**
 *
 *
 * THINK ABOUT.....
 *
 *
 *
 *
 *
 *
 */
class Entity
{
private:
	/// initialisation
	void initVariables();
	void initGameTextures();

protected:
	/// variables
	std::map<std::string,sf::Sprite*> _sprites;
	GameTexture* 		 			  _gameTextures;

	AnimationComponent*  			  _animComponent;
	MovementComponent*   			  _movementComponent;

public:
	/// constructor / destructor
	Entity();
	virtual ~Entity();

	/// initialisation of components
	void initAnimComponent();
	void initMovementComponent();
};


#endif //ZOMBIE_VS_HUMANS_ENTITY_H
