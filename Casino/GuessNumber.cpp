#include "GuessNumber.h"


void GuessNumber::letsPlay()
{
    do
    {
        do
        {
            cout << "Guess the number. You've got 10 chances" << endl;
            cout << "Enter the number (1-50):" << endl;
            cin >> number;

            helper();

            winLose();
        } while (tries != 0);

        reQu();
    } while (rQ == 1);
}

void GuessNumber::helper()
{
    if (number > wrightNumber)
    {

        cout << "Too big number, " << tries << " chances left." << endl;
        tries--;
    }
    else
    {
        if (number < wrightNumber)
        {
            cout << "Too small number " << tries << " chances left" << endl;
            tries--;
        }
    }
}

void GuessNumber::winLose()
{
    if (number == wrightNumber)
    {
        cout << "+----------------VICTORY!---------------------+" << endl;
        cout << "Yep, that was wright number)))" << endl;
        tries = 0;
        bet *= 2;
        cout << "+ " << bet << "$\n";
        Game::money += bet;
        cout << "+---------------------------------------------+" << endl;
        tries = 0;
    }
    else
    {
        if (tries == 0)
        {
            cout << "+------------------LOSE!----------------------+" << endl;
            cout << "HAAAA, LOOOOOSEEER!!! That was " << wrightNumber << endl;
            cout << "+---------------------------------------------+" << endl;
            Game::money -= bet;
            tries = 0;
        }
    }
}

GuessNumber::GuessNumber()
{
    wrightNumber = rand() % 50;
    number = 0;
    tries = 10;
}