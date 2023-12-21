// C++ Program to Find HCF of two numbers
#include <iostream>

using namespace std;
void hcf(int x, int y)
{
    int m, n;
    m = x;
    n = y;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    cout << "\nhcf of [ " << x << "] and [ " << y << "] is  " << m << endl;
}
int main()
{
    int a = 12;
    int b = 7;
    hcf(a, b);
    return 0;
}