//
// Created by ivan on 13.07.20.
//

#include "gui.h"

//// class	Button --------------------------------------------------


/// initialisation
void gui::Button::initFont()
{
	if(!_font.loadFromFile("Resource/Fonts/Amatic-Bold.ttf"))
	{
		FileErrorLog log;
		log.openLog("Config/ErrorsFile.log");
		log.writeError("File Resource/Fonts/Amatic-Bold.ttf in file \"gui\" is not opened\n");
		log.closeLog();
	}
}


/// constructor/destructor
/// x,y = top left point
gui::Button::Button(float x, float y, float width, float height, std::string str,
					sf::Color idleColor,sf::Color hoverColor,sf::Color activeColor)
{
	initFont();
	///  colors
	_idleColor = idleColor;
	_hoverColor = hoverColor;
	_activeColor = activeColor;

	///   text
	_text.setFont(_font);
	_text.setString(str);
	_text.setPosition(x,y);
	_text.setFillColor(sf::Color(71,158,88));

	///   rectangle
	_rect.setPosition(x,y);
	_rect.setSize(sf::Vector2f(width,height+5));
	_rect.setFillColor(idleColor);

	/// adjusting text according to rect using bin search
	std::function<int(int,int)> LambdaX = [&](int l,int r)
	{
		int mid = (l + r) / 2;
		_text.setCharacterSize(mid);
		if(r > l)
		{
			if(_text.getLocalBounds().width > width - 3)
				return LambdaX(l, mid);
			else
				return LambdaX(mid + 1,r);
		}
		else
			return mid;
	};
	LambdaX(0,1000);
	if((float)_text.getCharacterSize() >= height)
		_text.setCharacterSize((uint)height);
	std::function<int(int,int)> LambdaY = [&](int l,int r)
	{
		int mid = (l + r) / 2;
		_text.setPosition((float)mid,_text.getPosition().y);

		if(r > l)
		{
			if(_text.getPosition().x - x > x+width - (_text.getPosition().x + _text.getLocalBounds().width))
				return LambdaY(l,mid);
			else
				return LambdaY(mid + 1,r);
		}
		else
			return mid;
	};
	LambdaY(x,x + width);
	std::function<int(int,int)> LambdaH = [&](int l,int r)
	{
		int mid = (l + r) / 2;
		_text.setPosition(_text.getPosition().x,float(mid));

		if(r > l)
		{
			if(_text.getPosition().y - y > (y + height) - (_text.getPosition().y + _text.getGlobalBounds().height))
				return LambdaH(l,mid);
			else
				return LambdaH(mid + 1,r);
		}
		else
			return mid;
	};

}

gui::Button::~Button()
{
}

/// functions
void gui::Button::setIdleColor()
{
	_rect.setFillColor(_idleColor);
}

void gui::Button::setHoverColor()
{
	_rect.setFillColor(_hoverColor);
}

void gui::Button::setActiveColor()
{
	_rect.setFillColor(_activeColor);
}

void gui::Button::update(sf::Vector2f mousePos)
{
	if(_rect.getGlobalBounds().contains(mousePos))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			this->setActiveColor();
		}
		else
		{
			this->setHoverColor();
		}
	}
	else
	{
		this->setIdleColor();
	}

}

void gui::Button::render(sf::RenderTarget *target)
{
	target->draw(_rect);
	target->draw(_text);
}

bool gui::Button::isPressed(sf::Vector2f mousePos)
{
	return _rect.getGlobalBounds().contains(mousePos) &&
		   sf::Mouse::isButtonPressed(sf::Mouse::Left);
}
