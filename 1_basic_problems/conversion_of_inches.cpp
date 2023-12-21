// C++ Program to convert inches into yard, feet and inches
// C++ Program to find Compound Interest
#include <iostream>

using namespace std;

int main()
{
    float inches;
    float yard;
    float feet;

    cout << "Enter inches"
         << "    ";
    cin >> inches;
    cout << "Enter yard"
         << "    ";
    cin >> yard;
    cout << "Enter feet"
         << "    ";
    cin >> feet;
    feet = feet + (inches / 0.0833333);
    cout << "The new value of feet is " << feet << endl;
    yard = yard + (inches / 0.0277778);
    cout << "The new value of yard is " << yard << endl;
    yard = yard + (feet / 0.33333);
    cout << "The new value of yard is " << yard << endl;

    return 0;
}