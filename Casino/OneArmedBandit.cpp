#include "OneArmedBandit.h"

void OneArmedBandit::letsPlay(int result[3])
{
    do
    {
        for (int i = 0; i < 3; i++)
        {
            int x;
            x = rand() % 10;

            result[i] = x;
        }

        pressLever();

        reQu();
    } while (rQ == 1);
}

void OneArmedBandit::pressLever()
{
    do
    {
        cout << "Enter \"1\" to press the lever arm:" << endl;
        cin >> press;
        if (press != 1)
            error();
    } while (press != 1);
    money -= 5;
    screen();
    winLose();
}

void OneArmedBandit::screen()
{
    cout << "+--------------------------------------------+" << endl;
    cout << "|" << result[0] << "|" << result[1] << "|" << result[2] << "| \n";
    cout << "+--------------------------------------------+" << endl;
}

void OneArmedBandit::winLose()
{
    if (result[0] == result[1] && result[0] == result[2] && result[1] == result[2])
    {
        cout << "+----------------JackPot!---------------------+" << endl;
        bet = 5 * 10;
        money += bet;
        cout << "You earned " << bet << " $" << endl;
        cout << "Your cash: " << money << endl;
        cout << "+---------------------------------------------+" << endl;
    }
    else
    {
        if (result[0] == result[1] || result[1] == result[2] || result[0] == result[2])
        {
            cout << "+----------------Victory---------------------+" << endl;
            cout << "You've got 2/3!!!" << endl;
            bet = 5 * 5;
            money += bet;
            cout << "You've earned " << bet << " $" << endl;
            cout << "Your cash: " << money << endl;
            cout << "+--------------------------------------------+" << endl;
        }
        else
        {
            cout << "+-----------------Lose!----------------------+" << endl;
            cout << "HAAAA, LOSER!!!" << endl;
            cout << "Your cash: " << money << endl;
            cout << "+--------------------------------------------+" << endl;
        }
    }
}

OneArmedBandit::OneArmedBandit()
{
    press = 0;
}
