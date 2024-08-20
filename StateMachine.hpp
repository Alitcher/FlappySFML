#pragma once

#include <memory>
#include <stack>

#include "State.hpp"

namespace AlitcherLab 
{
	typedef std::unique_ptr<State> StateRef;

	//Backbone of the App
	class StateMachine
	{
	public:
		StateMachine();
		~StateMachine();

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();
		void ProcessStateChanges();

		StateRef& GetActiveState();

	private:
		std::stack<StateRef> _states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};

}
