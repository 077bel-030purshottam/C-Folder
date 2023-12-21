
// C++ Program to find sum of Array using function template

#include <iostream>

using namespace std;
template <class T>
T sum_arraY()
{
    T a[10];
    T sum = 0;
    cout << "Enter the element fo the array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "The sum of the array element is " << sum << endl;
}
int main()
{
    sum_arraY<int>();
    return 0;
}