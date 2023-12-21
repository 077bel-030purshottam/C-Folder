// C++ Program to find Compound Interest
// total amount--> A = P (1 + r/n) to the power of (nt)
// compound interest-- > ci = > A - p; OR  ci = p*pow((1+r/100),t);

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float p, t, r;
    float ci;
    cout << "Enter the p "
         << "    ";

    cin >> p;
    cout << "Enter the t "
         << "    ";

    cin >> t;
    cout << "Enter the r "
         << "    ";

    cin >> r;

    ci = p * pow((1 + r / 100.00), t);
    cout << "compound interst = " << ci << endl;
    return 0;
}