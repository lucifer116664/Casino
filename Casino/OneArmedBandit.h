#pragma once
#include "Game.h"
class OneArmedBandit :public virtual Game
{
protected:
	int result[3];
	int press;

	void winLose();

	void pressLever();

	void screen();
	
public:
	void letsPlay(int result[3]);

	OneArmedBandit();
};

