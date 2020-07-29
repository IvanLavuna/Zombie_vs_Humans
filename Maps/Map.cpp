//
// Created by ivan on 28.07.20.
//
#include "pch.h"
#include "Map.h"

#include <utility>

/// initialisation
void Map::initMap(std::string textureName)
{
	/// texture
	_mapTexture = new sf::Texture();
	_mapTexture->loadFromFile(textureName);

	/// sprite
	_sprite.setTexture(*_mapTexture);
	_sprite.setPosition(0.f,0.f);

}

void Map::initBoundsArray(std::string boundsArrFile)
{
	std::ifstream file(boundsArrFile);

	if(file.is_open())
	{
		std::string line;
		std::stringstream buffer;
		char elem;
		while(getline(file,line))
		{
			std::vector<char> arr;
			buffer << line;
			while(buffer >> elem)
			{
				arr.push_back(elem);
			}
			buffer.clear();
			_boundsArr.push_back(arr);
		}
		file.close();
	}
	else
	{
		FileErrorLog log;
		log.openLog("Config/ErrorsFile.log");
		log.writeError("File " + boundsArrFile + " is not opened.\n");
		log.closeLog();
	}
}

/// constructor / destructor
Map::Map(std::string textureName, std::string boundsArrFile):
	_mapTexture(nullptr)
{
	initMap(std::move(textureName));
	initBoundsArray(std::move(boundsArrFile));
}

Map::~Map()
{
	delete _mapTexture;
}

/// core
bool Map::isCollision(float posX, float posY)
{
	int x = static_cast<int>(posX / map_tileWidth), y = static_cast<int>(posY / map_tileHeight);

	/// check if coordinates are inside bounds array
	if(x > _boundsArr[0].size() || y > _boundsArr.size())
		return false;

	return _boundsArr[y][x] == '1';
}







