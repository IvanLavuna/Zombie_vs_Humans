//
// Created by ivan on 16.07.20.
//
#include "pch.h"
#include "GameTexture.h"

/// constructor/destructor

GameTexture::GameTexture(std::string pathToTextures)
{
	_pathToTexture = std::move(pathToTextures);
}

GameTexture::~GameTexture()
{

}

/** load all textures that are currently used in game**/
void GameTexture::loadGameTextures()
{
	using namespace boost::filesystem;
	for (directory_iterator itr(_pathToTexture); itr != directory_iterator(); ++itr)
	{
		std::string fileName = itr->path().filename().string();
		auto* new_texture = new sf::Texture();
		new_texture->loadFromFile(_pathToTexture + fileName);
		_textures[fileName] = new_texture;
	}
}

/// get texture
sf::Texture *GameTexture::getRobotTexture()
{
	if(_textures.find("robot_anim.png") != _textures.end())
		return _textures["robot_anim.png"];
	return nullptr;
}
