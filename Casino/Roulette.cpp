#include "Roulette.h"

void Roulette::numberChoose()
{
    do
    {
        cout << "Choose a number (0-37)" << endl;
        cin >> number;

        if (number < 0)
            error();
        if (number > 37)
            error();
    } while (number < 0 || number > 37);
}

void Roulette::winLose()
{
    if (number == wrightNumber)
    {
        cout << "+----------------VICTORY!---------------------+" << endl;
        cout << wrightNumber << " was wright number\n";
        bet *= 2;
        money += bet;
        cout << "+" << bet << "$\n";
        cout << "+---------------------------------------------+" << endl;
    }
    else
    {
        cout << "+------------------LOSE!----------------------+" << endl;
        cout << "HAA, LOOSEER. " << wrightNumber << " was the wright number.\n";
        cout << "+---------------------------------------------+" << endl;
        money -= bet;
    }
}

void Roulette::letsPlay()
{
    do
    {
        numberChoose();
        winLose();
        reQu();
    } while (rQ == 1);
}

Roulette::Roulette()
{
    wrightNumber = rand() % 37;
}
