// this program doesnt run in the vs code use in dev++ 

#include <iostream>

using namespace std;
#define concat(x, y) x##y
int main()
{
    int ab = 40;
    cout << concat(a, b) << endl;
    return 0;
}