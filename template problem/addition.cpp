
// C++ Program to Perform Simple Addition Function
//  Using Templates
#include <iostream>

using namespace std;
template <class T>
T addition()
{
    T a;
    T b;
    cout << "Enter th value of the a and  b " << endl;
    cin >> a >> b;
    T add_num = a + b;
    cout << "The addition of two number is " << add_num << endl;

    return 0;
}
int main()
{
    addition<int>();
    cout << "Adding the floating value " << endl;
    addition<float>();
    return 0;
}