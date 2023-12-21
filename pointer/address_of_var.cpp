#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    char c[20];
    int b = 20;
    char p = 'x';
    int *ptr;
    ptr = &a;

    // address of the int a is given by
    cout << "The address of the int a is " << &a << endl;

    //   address of the char string is
    cout << "The address of trhe char c is " << &c << endl;

    // values of the variable by variou mathod is given below
    cout << "The valus of a is " << a << endl;
    cout << "The valus of at the *ptr  is " << *ptr << endl;

    cout << "The address of the int a is " << ptr << endl;

    return 0;
}