#pragma once
#include "Game.h"
class GuessNumber :public virtual Game
{
protected:
	int wrightNumber;
	int number;
	int tries;

	void winLose();

	void helper();

public:
	void letsPlay();

	GuessNumber();
};

