//
// Created by ivan on 20.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_ENTITY_H
#define ZOMBIE_VS_HUMANS_ENTITY_H

#include "AnimationComponent.h"

class Entity
{
private:

protected:
	AnimationComponent* _animComponent;

public:
	Entity();
	virtual ~Entity();
};


#endif //ZOMBIE_VS_HUMANS_ENTITY_H
