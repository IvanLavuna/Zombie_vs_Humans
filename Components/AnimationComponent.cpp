//
// Created by ivan on 17.07.20.
//
#include "pch.h"
#include "AnimationComponent.h"


/// constructor/destructor
AnimationComponent::AnimationComponent()
= default;

AnimationComponent::~AnimationComponent()
= default;


/// core functions

/** play means changing frames **/
void AnimationComponent::play(const float &dt)
{
	for(auto & anim: _animations)
	{
		if(anim.second->_priority == PRIORITY::TWO)
			anim.second->play(dt);
	}
	for(auto & anim: _animations)
	{
		if(anim.second->_priority == PRIORITY::ONE)
			anim.second->play(dt);
	}
	for(auto & anim: _animations)
	{
		if(anim.second->_priority == PRIORITY::ZERO)
			anim.second->play(dt);
	}
}

void AnimationComponent::render(sf::RenderWindow *window)
{
	for(auto& anim: _animations)
	{
		anim.second->render(window);
	}
}

void AnimationComponent::addAnimation(std::string animName, sf::Texture* textureSheet, sf::Sprite* sprite, float frPosX, float frPosY, float frWidth, float frHeight,
									  unsigned numberOfFrames, PRIORITY priority, float speed)
{
	auto* newAnim = new Animation(textureSheet,sprite,frPosX,frPosY,frWidth,frHeight,numberOfFrames,priority,speed);
	_animations[animName] = newAnim;

}

bool AnimationComponent::removeAnimation(std::string animName)
{
	if(_animations.find(animName) != _animations.end())
	{
		_animations.erase(animName);
		return true;
	}
	return false;
}

void AnimationComponent::resetAnimationTextureCoo(std::string animName,float frPosX, float frPosY, float frWidth, float frHeight)
{
	_animations[animName]->resetTextureSheetCoo(frPosX,frPosY,frWidth,frHeight);
}

