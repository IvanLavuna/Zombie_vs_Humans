//
// Created by ivan on 29.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_SUMMERMAP_H
#define ZOMBIE_VS_HUMANS_SUMMERMAP_H

#define SUMMER_MAP_TEXTURE_PATH 		"Resource/map/summer_map.png"
#define SUMMER_MAP_BOUNDS_ARR_FILE_PATH "Config/summer_map_bounds_arr.map"
#include "Map.h"

class SummerMap : public Map
{
private:

public:
	/// constructor / destructor
	SummerMap();
	~SummerMap() override;

	/// render
	void render(sf::RenderWindow* window) override;


};


#endif //ZOMBIE_VS_HUMANS_SUMMERMAP_H
