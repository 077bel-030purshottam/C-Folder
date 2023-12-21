// C++ Program to Find Quotient and Remainder
#include <iostream>

using namespace std;

int main()
{
    double divident;
    double divisor;
    cout << "Enter the divident and divisor " << endl;
    cin >> divident >> divisor;
    double quotient = divident / divisor;
    int remainder = (int)divident % (int)divisor;
    cout << "The quotinet is " << quotient << endl;
    cout << "The remainder is " << remainder << endl;

    return 0;
}