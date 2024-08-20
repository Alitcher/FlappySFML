#include "AssetManager.hpp"

namespace AlitcherLab 
{
	AssetManager::AssetManager()
	{
	}

	AssetManager::~AssetManager()
	{
	}

	void AssetManager::LoadTexture(std::string name, std::string fileName)
	{
		sf::Texture tex;

		if (tex.loadFromFile(fileName)) 
		{
			this->_textures[name] = tex;
		}
	}

	sf::Texture& AssetManager::GetTexture(std::string name)
	{
		return this->_textures.at(name);
	}

	void AssetManager::LoadFont(std::string name, std::string fileName)
	{
		sf::Font fnt;

		if (fnt.loadFromFile(fileName))
		{
			this->_fonts[name] = fnt;
		}
	}

	sf::Font& AssetManager::GetFont(std::string name)
	{
		return this->_fonts.at(name);
	}
}