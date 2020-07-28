//
// Created by ivan on 21.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_FATHUMAN_H
#define ZOMBIE_VS_HUMANS_FATHUMAN_H

#ifndef FAT_HUMAN_CONFIG
#define FAT_HUMAN_CONFIG
/** texture config **/
#define FAT_HUMAN_TEXTURE_FRAME_WIDTH     100
#define FAT_HUMAN_TEXTURE_FRAME_HEIGHT    48

/** animation config **/
#define FAT_HUMAN_NUMBER_OF_FRAMES 		  19
#define FAT_HUMAN_MOVE_RIGHT_POS_FRAME_X  0
#define FAT_HUMAN_MOVE_RIGHT_POS_FRAME_Y  48
#define FAT_HUMAN_MOVE_LEFT_POS_FRAME_X   0
#define FAT_HUMAN_MOVE_LEFT_POS_FRAME_Y   48
#define FAT_HUMAN_MOVE_DOWN_POS_FRAME_X   0
#define FAT_HUMAN_MOVE_DOWN_POS_FRAME_Y   96
#define FAT_HUMAN_MOVE_UP_POS_FRAME_X     0
#define FAT_HUMAN_MOVE_UP_POS_FRAME_Y 	  0
#define FAT_HUMAN_STANDING_POS_FRAME_X    0
#define FAT_HUMAN_STANDING_POS_FRAME_Y    0
#define FAT_HUMAN_ANIMATION_NAME		  "testing_anim"

/** View config **/
#define	FAT_HUMAN_VIEW_WIDTH 	300
#define FAT_HUMAN_VIEW_HEIGHT   300
#endif //FAT_HUMAN_CONFIG


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
	void initViewComponent(sf::Sprite& sprite, float width, float height);

protected:
	/// possibilities of fatHuman
	void moveRight() override;
	void moveLeft() override;
	void moveDown() override;
	void moveUp() override;

	/// update

	/// render
	void renderView(sf::RenderWindow* window);

public:
	FatHuman();
	~FatHuman();

	/// core
	void render(sf::RenderWindow* window) override;
	void update(const float& dt) override;
	void updateInput(const float& dt) override;

};


#endif //ZOMBIE_VS_HUMANS_FATHUMAN_H
