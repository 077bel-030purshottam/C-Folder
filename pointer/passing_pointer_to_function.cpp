#include <iostream>

using namespace std;
const int m = 3;
void passpointer(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << p[i];
    }
}
int main()
{
    int arr[m] = {100, 200, 300};
    int *ptr;
    ptr = arr;
    // for (int i = 0; i < m; i++)
    // {
    //     cout <<" "<< ptr[i]; // this both will print the values of the arr;

    //     // cout << *(ptr + i);
    // }

    for (int i = 0; i < m; i++)
    {
        cout << " " << ptr; // this both will print the address  of the arr;
        ptr++;
        }

    passpointer(arr, m);
    return 0;
}