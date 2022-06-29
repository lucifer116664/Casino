#include "Menu.h"

void Menu::startProgram()
{
    int game;
    while (true)
    {
        do
        {
            cout << "+------------------Menu-----------------------+" << endl;
            cout << "You've got " << Game::money << " $\n";
            cout << "|---------------------------------------------|\n";
            cout << "\tChoose the game:" << endl;
            cout << "1.Roulette" << endl;
            cout << "2.Guess the number" << endl;
            cout << "3.One armed bandit" << endl;
            cout << "0.Leave the casino" << endl;
            cout << "+---------------------------------------------+\n";
            cin >> game;
            if (game < 0 || game > 3)
                Game::error();
        } while (game < 0 || game>3);

        if (game == 1 || game == 2)
        {
            do
            {
                cout << "Make your bet:" << endl;
                cin >> Game::bet;
                if (Game::bet > Game::money)
                    Game::error();
                else
                {
                    if (Game::bet < 0)
                        Game::error();
                }
            } while (Game::bet > Game::money || Game::bet < 1);
        }

        switch (game)
        {
        case 1: Roulette::letsPlay(); break;
        case 2: GuessNumber::letsPlay(); break;
        case 3: OneArmedBandit::letsPlay(OneArmedBandit::result);    break;
        case 0: cout << "Sorry, but you can't leave because of gambling addiction)))" << endl; break;
        }

    }
}
