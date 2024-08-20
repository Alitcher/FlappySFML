#pragma once
namespace AlitcherLab 
{
	class State
	{
	public:
		virtual void Init( ) = 0;
		virtual void HanpleInput() = 0;
		virtual void Update(float dt) = 0;
		virtual void Render(float dt) = 0;

		virtual void Pause();
		virtual void Resume();

		State();
		~State();

	private:

	};

	inline void State::Pause()
	{
	}

	inline void State::Resume()
	{
	}

	State::State()
	{
	}

	State::~State()
	{
	}
}
