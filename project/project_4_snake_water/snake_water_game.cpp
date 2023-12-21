#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int snake_water_game(char you, char comp)
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
int main()
{
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
    int result = snake_water_game(you, comp);
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
    return 0;
}