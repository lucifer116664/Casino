#pragma once
#include "Roulette.h"
#include "GuessNumber.h"
#include "OneArmedBandit.h"

class Menu :public Roulette, public GuessNumber, public OneArmedBandit
{
public:
	void startProgram();
};

