

// C++ Program to Find Factorial of Number
//  Using Recursion

#include <iostream>
using namespace std;
int fact(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}
int main()
{

    int num;
    cout << "Enter the value of the number " << endl;
    cin >> num;
    int factorial = fact(num);
    cout << "The factorial is " << factorial << endl;

    return 0;
}