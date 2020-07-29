//
// Created by ivan on 28.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_MAP_H
#define ZOMBIE_VS_HUMANS_MAP_H

#include "FileErrorLog.h"

/// constants
const float map_tileWidth  = 32.f;
const float map_tileHeight = 32.f;


/** I may create some factory that gives me some specific maps,
 *  but later **/
class Map
{
private:
	/// initialisation
	void initMap(std::string textureName);
	void initBoundsArray(std::string boundsArrFile);

protected:
	sf::Texture*			       _mapTexture;
	sf::Sprite   				   _sprite;
	std::vector<std::vector<char>> _boundsArr;


public:
	/// constructor / destructor
	Map(std::string textureName, std::string boundsArrFile);
	virtual ~Map();

	virtual void render(sf::RenderWindow* window) = 0;

	/// core
	bool isCollision(float posX, float posY);

	/// think more about collisions
};


#endif //ZOMBIE_VS_HUMANS_MAP_H
