// C++ Program to Reverse a Number
#include <iostream>

using namespace std;

int main()
{
    int number = 15234;
    int reverse = 0;
    int r, no;
    no = number;
    while (no > 0)
    {
        r = no % 10;
        reverse = reverse * 10 + r;
        no = no / 10;
    }
    cout << "Reverse = " << reverse << endl;
    return 0;
}