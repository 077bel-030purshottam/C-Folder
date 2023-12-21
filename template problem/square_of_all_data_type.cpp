

// C++ Program to find
// Square function of each data-type
//  using single template
#include <iostream>
#include <cmath>

using namespace std;
template <class T>
T square_num()
{
    T a;
    cout << "Enter the value of the a " << endl;
    cin >> a;
    T square_number = a * a;
    cout << "The square of the " << a << " is " << square_number << endl;
}
int main()
{
    square_num<int>();
    cout << "For the floating value " << endl;
    square_num<float>();
    cout << "For the double  value " << endl;
    square_num<double>();

    return 0;
}