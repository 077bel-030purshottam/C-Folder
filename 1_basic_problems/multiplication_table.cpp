// C++ program to Print Table of any Number
#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int i = 1;
    while (i <= 10)
    {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}