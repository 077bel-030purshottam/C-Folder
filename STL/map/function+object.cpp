#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[8] = {1, 2, 50, 3, 40, 56, 87, 10};
    // sort(arr, arr + 5);      // this will sort array element in ascending order
    sort(arr, arr + 5, greater<int>()); // this will sort array element in descending  order

    cout << "The sorted element are " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}