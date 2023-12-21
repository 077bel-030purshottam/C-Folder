#include <iostream>

using namespace std;

int main()
{

    // int num = 3;
    // cout << num % 2 << endl;
    // int a = 15234;
    // int rem = a % 10;
    // cout << rem << endl;
    // *******************************************************************
    // conversion of char  to int
    // int num = 90;
    // // char a = 'a';
    // // cout << (int)a;
    // char b = (char)num;
    // cout << b;
    // *****************************************************************
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i)
    {
        for (int space = 0; space < rows - i; ++space)
            cout << "  ";

        for (int j = i; j <= 2 * i - 1; ++j)
            cout << "* ";

        for (int j = 0; j < i - 1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}