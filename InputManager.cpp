#include "InputManager.hpp"

namespace AlitcherLab 
{
	InputManager::InputManager()
	{
	}

	InputManager::~InputManager()
	{
	}

	bool InputManager::IsSpriteClicked(sf::Sprite obj, sf::Mouse::Button btn, sf::RenderWindow& window)
	{
		if (sf::Mouse::isButtonPressed(btn)) 
		{
			sf::IntRect tmpRect(obj.getPosition().x, obj.getPosition().y, obj.getGlobalBounds().width, obj.getGlobalBounds().height);

			if (tmpRect.contains(sf::Mouse::getPosition(window))) 
			{
				return true;
			}
		}

		return false;
	}

	sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow& window)
	{
		return sf::Mouse::getPosition(window);
	}
}