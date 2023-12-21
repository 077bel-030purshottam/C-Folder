#include <iostream>
#include <iomanip> // for the setw function we need to use
                   //#include <iomanip>
using namespace std;
void display(int a[], int sz)
{
    cout << "The array elements are listed below\n";

    cout << "Element " << setw(13) << "value" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << setw(7) << i << setw(13) << a[i] << endl;
    }
}
int main()
{
    int size;
    int arr[size];
    cout << "Enter the size  of the  array \n";
    cin >> size;
    cout << "Enter the " << size << "  elements  of the  array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    display(arr, size);
    return 0;
}