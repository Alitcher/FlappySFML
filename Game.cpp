#include "Game.hpp"
#pragma once

namespace AlitcherLab
{
	AlitcherLab::Game::Game(int width, int height, std::string title)
	{
		_data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
		this->Run();

	}

	AlitcherLab::Game::~Game()
	{
	}

	void AlitcherLab::Game::Run()
	{
		float newTime, frameTime, lerp;
		float currentTime = this->_clock.getElapsedTime().asSeconds();
		float accumulator = 0.0f;

		while (this->_data->window.isOpen())
		{
			this->_data->machine.ProcessStateChanges(); //check if state changes
			newTime = this->_clock.getElapsedTime().asSeconds();
			frameTime = newTime - currentTime;

			if (frameTime > 0.25f)
			{
				frameTime = 0.25f;
			}

			while (accumulator >= dt)
			{
				this->_data->machine.GetActiveState()->HanpleInput();
				this->_data->machine.GetActiveState()->Update(dt);

				accumulator -= dt;
			}

			lerp = accumulator / dt;
			this->_data->machine.GetActiveState()->Render(lerp);
		}
	}
}