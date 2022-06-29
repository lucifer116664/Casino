#include "Game.h"

void Game::error()
{
	cout << "+-----------------WARNING---------------------+" << endl;
	cout << "Wrong data. Try again:" << endl;
	cout << "+---------------------------------------------+" << endl;
}

void Game::reQu()
{
	do
	{
		cout << "Repeat: \"1\"\n";
		cout << "Quit \"0\"\n";
		cin >> rQ;
		if (rQ < 0 || rQ>1)
		{
			error();
		}
	} while (rQ < 0 || rQ>1);
}

Game::Game()
{
	money = 100;
	bet = 0;
	rQ = 0;
}
