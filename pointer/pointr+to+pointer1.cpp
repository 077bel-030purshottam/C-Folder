#include <iostream>

using namespace std;

int main()
{
    int var = 100;
    int *ptr;
    int **pptr;
    ptr = &var;
    pptr = &ptr;
    cout << "The value of var is " << var << endl;
    cout << "The value of var is " << *ptr << endl;

    cout << "The address of var is " << &var << endl;
    cout << "The address of var is " << ptr << endl;

    cout << "The value of var is " << **pptr << endl;
    cout << "The address of var is " << &*ptr << endl;

    return 0;
}