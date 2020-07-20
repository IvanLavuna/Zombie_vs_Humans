//
// Created by ivan on 13.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_GUI_H
#define ZOMBIE_VS_HUMANS_GUI_H
#include "State.h"
#include "FileErrorLog.h"




namespace gui
{
	class Button
	{
	private:
		/// variables
		sf::Text _text;
		sf::Font _font;
		sf::RectangleShape _rect;

		sf::Color _idleColor;
		sf::Color _hoverColor;
		sf::Color _activeColor;

		/// initialisation
		void initFont();

	public:

		Button(float x, float y, float width, float height, std::string str,
			   sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor);
		~Button();

		void setIdleColor();
		void setHoverColor();
		void setActiveColor();

		void update(sf::Vector2f mousePos);
		void render(sf::RenderTarget* target = nullptr);

		bool isPressed(sf::Vector2f mousePos);
	};
};


#endif //ZOMBIE_VS_HUMANS_GUI_H
