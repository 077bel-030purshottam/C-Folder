// C++ program to find LCM of two numbers
#include <iostream>

using namespace std;
void lcm(int a, int b)
{
    int m = a;
    int n = b;
    while (m != n)
    {
        if (m < n)
        {
            m = m + a;
        }
        else
        {
            n = n + b;
        }
    }
    cout << "The lcm of [" << a << "] and [" << b << "]  is " << m << endl;
}
int main()
{
    int a = 2;
    int b = 15;
    lcm(a, b);

    return 0;
}