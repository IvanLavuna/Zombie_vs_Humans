//
// Created by ivan on 21.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_FATHUMAN_H
#define ZOMBIE_VS_HUMANS_FATHUMAN_H
#include "Human.h"

/**
 * think about difference between Human and Entity
 */
class FatHuman: public Human
{
private:
	/// variables
	sf::Texture _fatHumanTexture;

	/// initialisation

	/// mustInit
	void initTexture();
	void initSprite(sf::Vector2f pos = {0.f,0.f});
	void initAnimationComponent();
	void initMovementComponent(float speed = 100.f);

public:
	FatHuman();
	~FatHuman();

	/// core

	/// possibilities of fatHuman
	void moveRight() override;
	void moveLeft() override;
	void moveDown() override;
	void moveUp() override;

	void render(sf::RenderWindow* window) override;
	void update(const float& dt) override;
	void updateInput(const float& dt) override;
};


#endif //ZOMBIE_VS_HUMANS_FATHUMAN_H
