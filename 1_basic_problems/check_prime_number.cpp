// C++ Program to Check given number is Prime number or not

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the num" << endl;
    cin >> num;

    if (num == 2)
    {
        cout << num << " is a prime number " << endl;
    }
    else if (num % 2 != 0)
    {
        cout << num << " is a prime number " << endl;
    }
    else
    {
        cout << "it is not prime number " << endl;
    }
    return 0;
}
