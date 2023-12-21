#include <iostream>

using namespace std;
#define max(a, b) ((a) > (b)) ? a : b;
int main()
{
    int i = 10;
    int j = 50;
    int large = max(i, j);
    cout << "The maximum number between i and j is " << large << endl;

    return 0;
}