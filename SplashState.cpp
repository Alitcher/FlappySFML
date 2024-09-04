#include "SplashState.hpp"

namespace AlitcherLab
{
    SplashState::SplashState(GameDataRef data): _data(data)
    {
    }

    SplashState::~SplashState()
    {
    }

    void SplashState::Init()
    {
        this->_data->assets.LoadTexture("",SPLASH_SCENE_BACKGROUND_FILEPATH);
        _bg.setTexture(this->_data->assets.GetTexture("Splash State Background"));
    }

    void SplashState::HandleInput()
    {
        sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}
		}
    }

    void SplashState::Update(float dt)
    {
        (void)dt;
        if (this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
        {
            // Switch To Main Menu
            std::cout << "Go to main menu" << std::endl;
        }
    }

    void SplashState::Render(float dt)
    {
        (void)dt;
    }
}