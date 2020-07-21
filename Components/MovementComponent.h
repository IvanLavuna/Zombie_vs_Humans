//
// Created by ivan on 20.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_MOVEMENTCOMPONENT_H
#define ZOMBIE_VS_HUMANS_MOVEMENTCOMPONENT_H


class MovementComponent
{
private:
	sf::Sprite& _sprite;
	float 		_speed;

public:
	/// constructor / destructor
	explicit MovementComponent(sf::Sprite* sprite, float speed = 10.f);
	~MovementComponent();

	/// core functions
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void move(float offsetX,float offsetY);

	/** set position relating with window **/
	void setPosition(float posX,float posY);


};


#endif //ZOMBIE_VS_HUMANS_MOVEMENTCOMPONENT_H
