// C++ Program to Find number of Digits in any number
#include <iostream>

using namespace std;

int main()
{
    int a = 11458;
    int count = 0;
    int no;
    no = a;
    while (no > 0)
    {
        no = no / 10;
        count++;
    }

    cout << "There are = " << count << " digits in the number = " << a << endl;
    return 0;
}