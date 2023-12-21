#include <iostream>

using namespace std;
#define m 3
int main()
{
    int arr[m] = {10, 200, 300};
    for (int i = 0; i < m; i++)
    {
        // cout << "  " << arr[i];
        *arr = i;
        cout << "  " << *arr << endl;
    }

    return 0;
}