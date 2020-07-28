//
// Created by ivan on 20.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_HUMAN_H
#define ZOMBIE_VS_HUMANS_HUMAN_H

#include "Entity.h"

/** This class should configure all
 *  humans i.e zombie do not need camera **/

class Human : public Entity
{
protected:

	/// functions that defines human possibilities
	virtual void moveRight() = 0;
	virtual void moveLeft() = 0;
	virtual void moveDown() = 0;
	virtual void moveUp() = 0;

public:
	/// constructor / destructor
	Human();
    ~Human();

    virtual void render(sf::RenderWindow* window) = 0;
    virtual void update(const float& dt) = 0;
	virtual void updateInput(const float& dt) = 0;
};


#endif //ZOMBIE_VS_HUMANS_HUMAN_H
