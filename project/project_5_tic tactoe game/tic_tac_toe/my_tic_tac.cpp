#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
char box[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void drawboard()
{
    system("cls");
    cout << ("\n\n\t Tic Tac Toe \n\n");
    cout << ("Player1 (X) - Player2 (O) \n\n\n");
    cout << setw(4) << box[1] << setw(5) << box[2] << setw(6) << box[3] << endl;
    cout << "|____|" << setw(4) << "|____|" << setw(4) << "|____|";
    cout << endl;
    cout << setw(4) << box[4] << setw(5) << box[5] << setw(6) << box[6] << endl;
    cout << "|____|" << setw(4) << "|____|" << setw(4) << "|____|";
    cout << endl;
    cout << setw(4) << box[7] << setw(5) << box[8] << setw(6) << box[9] << endl;
    cout << "|____|" << setw(4) << "|____|" << setw(4) << "|____|";
    cout << endl;
}
int checwin()
{
    if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[4] == box[5] && box[5] == box[6])
    {
        return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[3] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }
    else if (box[2] == box[5] && box[8] == box[7])
    {
        return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {
        return 1;
    }
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
             box[4] != '4' && box[5] != '5' && box[6] != '6' &&
             box[7] != '7' && box[8] != '8' && box[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    system("color 3a");
    int choice;
    char mark;
    int i;
    int player = 1;
    do
    {
        drawboard();
        player = (player % 2) ? 1 : 2;
        cout << " player " << player << " Enter your choice" << endl;
        cin >> choice;
        mark = (player == 1) ? 'x' : '0';
        if (choice == 1 && box[1] == '1')
        {
            box[1] = mark;
        }
        else if (choice == 2 && box[2] == '2')
        {
            box[2] = mark;
        }
        else if (choice == 3 && box[3] == '3')
        {
            box[3] = mark;
        }
        else if (choice == 4 && box[4] == '4')
        {
            box[4] = mark;
        }
        else if (choice == 5 && box[5] == '5')
        {
            box[5] = mark;
        }
        else if (choice == 6 && box[6] == '6')
        {
            box[6] = mark;
        }
        else if (choice == 7 && box[7] == '7')
        {
            box[7] = mark;
        }
        else if (choice == 8 && box[8] == '8')
        {
            box[8] = mark;
        }
        else if (choice == 9 && box[9] == '9')
        {
            box[9] = mark;
        }
        else
        {
            cout << "invalid opttion" << endl;
            player--;
            getch();
        }
        i = checwin();
        player++;

    } while (i == -1);
    drawboard();

    if (i == 1)
    {
        cout << "PLayer " << --player << " won the game " << endl;
    }

    else
    {
        cout << "DRaw" << endl;
    }
    getch();
    return 0;
}