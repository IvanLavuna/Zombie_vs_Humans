//
// Created by ivan on 16.07.20.
//

#ifndef ZOMBIE_VS_HUMANS_GAMETEXTURE_H
#define ZOMBIE_VS_HUMANS_GAMETEXTURE_H

/**
	Factory class GameTexture
 	functions include getting ALL textures that are currently used in game
 	but previously we need to call function loadGameTextures

 	For purpose we only use files with .png extension
 	if we add file with another extension it won't work

 	Also we must properly name a files
 **/

class GameTexture
{
private:
	/// variable
	std::string _pathToTexture;
	std::map<std::string,sf::Texture*> _textures;

public:
	/// constructor/destructor
	explicit GameTexture(std::string pathToTextures);
	virtual ~GameTexture();

    /** load all textures that are currently used in game**/
	void loadGameTextures();

	/// get texture
	sf::Texture* getRobotTexture();

};


#endif //ZOMBIE_VS_HUMANS_GAMETEXTURE_H
