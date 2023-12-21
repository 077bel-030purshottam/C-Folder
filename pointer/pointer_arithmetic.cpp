#include <iostream>

using namespace std;
const int m = 3;
int main()
{
    // this is the example of the increment of the pointer

    int arr[m] = {10, 20, 30};
    int *ptr;
    ptr = arr; // let us have address od the arr in the pointer ptr

    cout << "this is the example of the increment of the pointer" << endl;

    for (int i = 0; i < m; i++)
    {
        cout << "The address of the a[" << i << "]" << (ptr) << endl;
        cout << "The value  of the a[" << i << "]" << *(ptr) << endl;
        ptr++;
    }

    // ***********************************************************************************************************

    // this is the example of the decrement of the pointer

    // int arr[m] = {10, 20, 30};
    // int *ptr;
    // ptr = &arr[m - 1];
    // cout << "this is the example of the decrement of the pointer" << endl;
    // for (int i = m; i > 0; i--)
    // {
    //     cout << "The address of the a[" << i << "]" << (ptr) << endl;
    //     cout << "The value  of the a[" << i << "]" << *(ptr) << endl;
    //     ptr--;
    // }

    // ********************************************************************************************

    // this is the example of the decrement of the pointer
    // int arr[m] = {10, 20, 30};
    // int *ptr;
    // ptr = arr;
    // int i = 0;

    // while (ptr <= &arr[m - 1])
    // {
    //     cout << "address of the variables  " << ptr << endl;
    //     cout << "values  of the variables  " << *ptr << endl;
    //     ptr++;
    //     i++;
    // }
    return 0;
}