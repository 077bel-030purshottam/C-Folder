// C++ program to generate random numbers
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int number;
    srand(time(0));

    cout << "The value of number are" << endl;
    for (int i = 0; i < 10; i++)
    {
        number = rand() % 26 + 1;
        cout << number << " ";
    }

    return 0;
}