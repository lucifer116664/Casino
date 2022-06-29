#pragma once
#include "Game.h"
class Roulette :public virtual Game
{
protected:
	int wrightNumber;
	int number;

	void numberChoose();

	void winLose();

public:
	void letsPlay();

	Roulette();
};

