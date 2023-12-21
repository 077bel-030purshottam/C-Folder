#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;

char box[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; // for the tic tac toe game
void calculate()                                                   // for the simple calculator
{

    // declaring the variables

    double num1, num2;
    char opera_tor;

    // asking input from the user
    cout << "Enter the value of num1 " << endl;
    cin >> num1;
    cout << "Enter the value of num2 " << endl;
    cin >> num2;
    cout << "Enter the operator to perform any task " << endl;
    cin >> opera_tor;

    switch (opera_tor)
    {
    case '+':
        cout << "The sum is " << num1 + num2 << endl;

        break;

    case '-':
        cout << "The difference  is " << num1 - num2 << endl;
        break;

    case '*':
        cout << "The product  is " << num1 * num2 << endl;
        break;
    case '/':
        cout << "The division  is " << num1 / num2 << endl;
        break;
    case '%':
        cout << "The reminder is " << (int)num1 % (int)num2 << endl;
        break;
    default:
        cout << " math syntax error " << endl;
    }
}
int snake_water_game(char you, char comp) // for the snake water game
{
    // return 1 if you win ,-1 if you lose and 0 if  draw

    // for the draw
    // cases covered
    // 1-> // ss
    // 2-> // gg
    // 3-> // ww

    if (you == comp)
    {
        return 0;
    }

    // cases covered
    // ->sw
    // ->ws
    // ->sg
    // ->gs
    // ->gw
    // ->wg

    // for the sw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    //  for the sg
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    // for the gw
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else
    {
        return 50;
    }
}
void drawboard() // for the tic tac toe game
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
int checwin() // for the tic tac toe game
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
    int choice;

    cout << "PLz select the follwing option for the mantioned game " << endl;
    cout << "simple calculator     =>> choice  1" << endl;
    cout << "Number guessing game  =>> choice  2" << endl;
    cout << "Snake water game      =>> choice  3" << endl;
    cout << "tic tac toe           =>> choice  4" << endl;
    cout << "Press any key to start the game " << endl;
    getch();
    cout << "Enter you choice " << endl;
    cin >> choice;
    switch (choice)
    {
        // simple calculator
    case 1:
        calculate();
        char str1[10];
        int res;

        for (int i = 0; i < 1; i++)
        {
            cout << "do you want to do more calculation "
                 << "yes or no " << endl;
            cin >> str1;

            if (res = strcmp(str1, "yes") == 0)
            {
                calculate();
            }
            else if (res = strcmp(str1, "no") == 0)
            {
                cout << "ok no problem see you next time " << endl;
                break;
            }
            --i;
        }

    case 2:
        // guessing number
        int num, guess_number;
        static int count = 1;
        srand(time(0));
        num = rand() % 100 + 1;
        // cout << "The value  of num is " << num << endl;
        do
        {
            cout << "Enter the guess number" << endl;
            cin >> guess_number;
            if (guess_number > num)
            {
                cout << "lower number please" << endl;
            }
            else if (guess_number < num)
            {
                cout << "higher number please " << endl;
            }
            else
            {
                cout << "You have guessed in " << count << " attempts " << endl;
            }
            count++;
        } while (guess_number != num);

    case 3:
        // for the snake _water game
        char you, comp;

        int number;
        srand(time(0));
        number = rand() % 100 + 1;
        if (number < 30)
        {
            comp = 's';
        }
        else if (number > 30 && number < 60)
        {
            comp = 'w';
        }
        else
        {
            comp = 'g';
        }
        cout << "Enter 's' for the snake ,'w' for the water and 'g' for the gin" << endl;
        cin >> you;
        static int result = snake_water_game(you, comp);
        cout << "You choose " << you << " and computer choose " << comp << endl;
        if (result == 0)
        {
            cout << "Gamw Draw" << endl;
        }
        else if (result == 1)
        {
            cout << "You won the game " << endl;
        }
        if (result == -1)
        {
            cout << "You lose " << endl;
        }
    case 4:
        // for the tic tac toe game
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
    default:
        cout << "invalid option" << endl;
    }

    return 0;
}