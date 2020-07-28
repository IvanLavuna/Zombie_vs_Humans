//
// Created by ivan on 24.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_VIEWCOMPONENT_H
#define ZOMBIE_VS_HUMANS_VIEWCOMPONENT_H

/// camera always moves with user
class ViewComponent
{
private:
	sf::Sprite&	_sprite;
	sf::View	_view;

public:
	explicit ViewComponent(sf::Sprite& sprite, float width, float height);
	~ViewComponent();

	/// core
	void render(sf::RenderWindow* window);

	/// get
	float getViewWidth()  const { return _view.getSize().x; }
	float getViewHeight() const { return _view.getSize().y ;}

};


#endif //ZOMBIE_VS_HUMANS_VIEWCOMPONENT_H
