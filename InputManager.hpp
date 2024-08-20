#pragma once
#include <SFML/Graphics.hpp>

namespace AlitcherLab 
{
	class InputManager
	{
	public:
		InputManager();
		~InputManager();
		bool IsSpriteClicked(sf::Sprite obj, sf::Mouse::Button btn, sf::RenderWindow &window);

		sf::Vector2i GetMousePosition(sf::RenderWindow& window);
	private:

	};


}