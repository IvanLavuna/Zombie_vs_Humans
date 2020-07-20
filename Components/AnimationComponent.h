//
// Created by ivan on 17.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H
#define ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H

/**
 * All classes that have some animation will have this as a member of class.
 * It's basically the main animation, but ,for instance, class "FireBall" will
 * control this animation
 *
 * position of animation is top left corner
 *
 * THIS class is totally uncompleted
 * **/

#include"GameTexture.h"

/** levels of rendering
 * ZERO - this level renders first
 * ONE - this level renders second
 * THIRD - this level renders third **/
enum class PRIORITY{ZERO = 0, ONE, TWO};

class AnimationComponent
{
private:
	/** this class handles one specific animation
	 *  We also identify animation by special name **/
	class Animation
	{
	public:
		/// variables
		sf::Sprite&    _sprite;
		sf::Texture&   _textureSheet;
		unsigned	   _numberOfFrames;
		unsigned 	   _curFrame;
		PRIORITY	   _priority;
		float 		   _timer;
		float   	   _frSpeed; /** speed of changing frames **/

	private:
		void resetTimer(float newTime = 0)
		{
			_timer = newTime;
		}
		void updateTimer(const float& dt)
		{
			_timer += dt;
		}

	public:
		/// constructor / destructor
		Animation(sf::Texture* textureSheet, sf::Sprite* sprite, unsigned numberOfFrames = 15, PRIORITY priority = PRIORITY::TWO, float speed = 100.f):
		    _sprite(*sprite),
			_textureSheet(*textureSheet),
			_numberOfFrames(numberOfFrames),
			_curFrame(0),
			_priority(priority),
			_timer(0),
			_frSpeed(speed)
			{
				_sprite.setTexture(_textureSheet);
			}
		~Animation() = default;

		/** play means changing frames **/
		void play(const float& dt)
		{
			updateTimer(dt);
			if(_timer * _frSpeed > 10.f)
			{
				resetTimer();
				_curFrame++;

				if(_curFrame == _numberOfFrames)
				{
					_curFrame = 0;
					_sprite.setTextureRect(sf::IntRect (0, 0, _sprite.getTextureRect().width, _sprite.getTextureRect().height));
				}
				else
				{
					float rectLeftPos = static_cast<float>(_curFrame) * _sprite.getTextureRect().width;
					_sprite.setTextureRect(sf::IntRect(rectLeftPos,0, _sprite.getTextureRect().width, _sprite.getTextureRect().height));
				}
			}
		}

		void render(sf::RenderWindow* window) const
		{
			window->draw(_sprite);
		}
	};

private:
	/// variables
	std::map<std::string, Animation*> _animations;

public:
	/** by default number of frames are 15 **/
	explicit AnimationComponent();
	~AnimationComponent();

	/// core functions
	void play(const float& dt);
	void render(sf::RenderWindow* window);

	void addAnimation(std::string animName, sf::Texture* textureSheet, sf::Sprite* sprite, unsigned numberOfFrames = 15, PRIORITY priority = PRIORITY::TWO, float speed = 100.f);
	bool removeAnimation(std::string animName);

};


#endif //ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H





