#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int num, guess_number, count = 1;
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

    return 0;
}