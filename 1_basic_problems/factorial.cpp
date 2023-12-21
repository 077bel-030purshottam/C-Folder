// C++ Program to find Factorial of a Number
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the num" << endl;
    cin >> num;
    int i = 1;
    int fact = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    cout << fact << endl;
    return 0;
}