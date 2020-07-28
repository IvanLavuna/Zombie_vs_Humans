//
// Created by ivan on 17.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H
#define ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H



/** levels of rendering
 * ZERO - this level renders first
 * ONE - this level renders second
 * THIRD - this level renders third **/
enum class PRIORITY{ZERO = 0, ONE, TWO};



class AnimationComponent
{
private:
	/** this class handles one specific animation.
	 *  We also identify animation by special name. **/
	class Animation
	{
	public:
		/// variables
		sf::Sprite&    _sprite;
		sf::Texture&   _textureSheet; /** textureSheet should be only horizontal **/
		unsigned	   _numberOfFrames;
		unsigned 	   _curFrame;
		PRIORITY	   _priority;
		float 		   _timer;
		float   	   _frSpeed; /** speed of changing frames **/
		float 		   _frPosX;
		float 		   _frPosY;
		float 		   _frWidth;
		float 		   _frHeight;

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
		Animation(sf::Texture* textureSheet, sf::Sprite* sprite, float frPosX, float frPosY, float frWidth, float frHeight,
				unsigned numberOfFrames, PRIORITY priority = PRIORITY::TWO, float speed = 100.f):
			_textureSheet(*textureSheet),
			_sprite(*sprite),
			_numberOfFrames(numberOfFrames),
			_curFrame(0),
			_priority(priority),
			_timer(0),
			_frSpeed(speed),
			_frPosX(frPosX),
			_frPosY(frPosY),
			_frWidth(frWidth),
			_frHeight(frHeight)
			{}
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
					_sprite.setTextureRect(sf::IntRect (_frPosX, _frPosY, _frWidth, _frHeight));
				}
				else
				{
					float rectLeftPos = static_cast<float>(_curFrame) * _frWidth;
					_sprite.setTextureRect(sf::IntRect(rectLeftPos, _frPosY, _frWidth, _frHeight));
				}
			}
		}

		void render(sf::RenderWindow* window) const
		{
			window->draw(_sprite);
		}

		void resetTextureSheetCoo(float frPosX,float frPosY,float frWidth,float frHeight)
		{
			_frPosX = frPosX;
			_frPosY = frPosY;
			_frWidth = frWidth;
			_frHeight = frHeight;
		}
	};

private:
	/// variables
	std::map<std::string, Animation*> _animations;

public:
	explicit AnimationComponent();
	~AnimationComponent();

	/// core functions
	void play(const float& dt);
	void render(sf::RenderWindow* window);

	void addAnimation(std::string animName, sf::Texture* textureSheet, sf::Sprite* sprite, float frPosX, float frPosY, float frWidth, float frHeight,
					  unsigned numberOfFrames, PRIORITY priority = PRIORITY::TWO, float speed = 100.f);
	bool removeAnimation(std::string animName);
	void resetAnimationTextureCoo(std::string animName,float frPosX,float frPosY,float frWidth,float frHeight);
};


#endif //ZOMBIE_VS_HUMANS_ANIMATIONCOMPONENT_H





