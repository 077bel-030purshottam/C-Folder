#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    char player1[10];
    char player2[10];
    char choice1 = 'x';
    char choice2 = 'y';
    int space[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result;
    // cout << "press any key to start the game" << endl;
    // getch();

    // asking input from the user
    getch();
    for (int i = 1; i < 10; i++)
    {
        if (space[i + 1] % 2 == 0)
        {
            cout << "player 1 plz enter your choice1       "

                 << " ";
            cin >> player1[i];
        }
        else
        {
            cout << "player 2  plz enter your choice2      "

                 << " ";
            cin >> player2[i];
        }
        if (i % 3 == 0)
        {
            cout << endl;
        }
    }

    // displaying the user inputs
    for (int i = 1; i < 10; i++)
    {
        if (space[i + 1] % 2 == 0)
        {
            cout << player1[i] << " ";
        }
        else
        {
            cout << player2[i] << " ";
        }

        if (i % 3 == 0)
        {
            cout << endl;
        }
    }

    // cheking the condition for winning condition
    for (int i = 1; i < 10; i++)
    {

        if (space[i + 1] % 2 == 0)
        {
            if (choice1 == player1[i])
            {
                result = 1;
            }
            else if (choice2 == player1[i])
            {
                result = 0;
            }
        }

        if (space[i] % i == 0)
        {
            if (choice1 == player1[i] && choice1 == player2[i])
            {
                result = 1;
            }
            else if (choice2 == player1[i] && choice2 == player2[i])
            {
                result = 0;
            }
        }
    }

    if (result == 1)
    {
        cout << "player 1 won" << endl;
    }
    else if (result == 0)
    {
        cout << "player 2 won" << endl;
    }
    else
    {
        cout << "draw" << endl;
    }
    return 0;
}