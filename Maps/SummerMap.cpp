//
// Created by ivan on 29.07.20.
//
#include "pch.h"
#include "SummerMap.h"

SummerMap::SummerMap() :
	Map(SUMMER_MAP_TEXTURE_PATH, SUMMER_MAP_BOUNDS_ARR_FILE_PATH)
{

}

SummerMap::~SummerMap()
{

}

void SummerMap::render(sf::RenderWindow *window)
{
	window->draw(_sprite);

}
