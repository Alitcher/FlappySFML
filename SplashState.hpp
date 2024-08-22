#pragma once
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "State.hpp"

namespace AlitcherLab
{
    class SplashState
    {
    public:
        SplashState(GameDataRef data);
        ~SplashState();

        void Init();
        void HandleInput();
        void Update(float dt);
        void Render(float dt);

    private:
        GameDataRef _data;

        sf::Clock _clock;
        sf::Texture _bgTexture;
        sf::Sprite _bg;
    };
}
