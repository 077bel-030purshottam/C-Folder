// C++ program to find sum of digits of a number
#include <iostream>

using namespace std;

int main()
{

    int digits = 12345;
    int temp;
    temp = digits;
    int rem;
    int sum = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        temp = temp / 10;
    }
    cout << "The sum of the digits " << digits << " is " << sum << endl;
    return 0;
}