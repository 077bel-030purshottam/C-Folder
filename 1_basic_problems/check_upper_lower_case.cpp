// C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character
#include <iostream>

using namespace std;

int main()
{
    // char a = 'A';
    char a;

    // char b = 'a';
    // char b;

    // cout << int(a);
    // cout << int(b);

    cout << "Enter any character " << endl;
    cin >> a;
    if (int(a) >= 97 && int(a) <= 122)
    {
        cout << a << " is lower  case " << endl;
    }
    else if (int(a) >= 65 && int(a) < 90)
    {
        cout << a << " is upper  case " << endl;
    }
    else if (int(a) >= 48 && int(a) <= 57)
    {
        cout << a << " is  digit  " << endl;
    }
    else
    {
        cout << a << " is  special character   " << endl;
    }
    return 0;
}