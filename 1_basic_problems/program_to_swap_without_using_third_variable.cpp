// C++ Program to Swap Two Numbers Without Using third variable
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 40;
    string name = "purshottam";
    string address = "sarlahi";
    swap(a, b);
    cout << "The value of a and b is " << endl;
    cout << "a = " << a << " and THe value of b is " << b << endl;
    swap(name, address);
    cout << "After swapping we have " << endl;
    cout << "name = " << name << endl;
    cout << "address = " << address << endl;

    // ******************************************************
    cout << "\n without using the third variable " << endl;
    int x = 10;
    int y = 20;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "The value of x and y is " << endl;
    cout << "x = " << x << " and THe value of y is " << y << endl;

    return 0;
}