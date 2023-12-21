#include <iostream>

using namespace std;
template <class T1, class T2>
void swap(T1 a, T2 b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    // for the integer data type
    int x = 10;
    int y = 20;
    cout << "Before swapping " << endl;
    cout << "The value  of a is " << x << endl
         << "The value of b is " << y << endl;
    swap(x, y);
    cout << "After  swapping " << endl;
    cout << "The value  of a is " << x << endl
         << "The value of b is " << y << endl;
    cout << endl;
    // for the float type
    float m = 10.23;
    float n = 20.54;
    cout << "Before swapping " << endl;
    cout << "The value  of m is " << m << endl
         << "The value of n is " << n << endl;
    swap(m, n);
    cout << "After  swapping " << endl;
    cout << "The value  of m is " << m << endl
         << "The value of n is " << n << endl;

    return 0;
}