#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num = 36;
    double num1 = 27;
    cout << (double)pow(num, 0.5) << endl;

    cout << (double)pow(num1, (double)1 / (double)3) << endl;
    cout << pow(num1, (double)1 / (double)3) << endl;

    return 0;
}