// C++ program to Find Sum of Natural Numbers using Recursion

#include <iostream>

using namespace std;
int sum_recursion(int n)
{
    if (n != 0)
    {
        return n + sum_recursion(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the  value of the n" << endl;
    cin >> n;

    cout << "The sum is " << sum_recursion(n) << endl;
    return 0;
}