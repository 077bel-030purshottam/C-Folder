// C++ program to find cube of number using macros
#include <iostream>
#include <math.h>

using namespace std;
#define CUBE(x) (x * x * x)
int main()
{
    int a = 10;
    int cube = CUBE(a);
    cout << "The cube of the numer  is " << cube << endl;

    return 0;
}