#include <iostream>

using namespace std;
const int m = 3;
int main()
{
    int a[m] = {100, 200, 300};
    int *ptr[m];
    for (int i = 0; i < m; i++)

    {
        ptr[i] = &a[i];
    }
    for (int i = 0; i < m; i++)

    {
        cout << " " << *ptr[i]; // this will give the values of the array
    }
    cout << endl;
    for (int i = 0; i < m; i++)

    {
        cout << " " << ptr[i]; // this will give the address  of the array
    }
    return 0;
};