

// C++ Program for Linear search using recursion
#include <iostream>

using namespace std;
// using the function
// int linear_search(int array[50], int size, int key)
// {
//     cout << "Enter the key element " << endl;
//     cin >> key;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == key)
//         {
//             // cout << key << " is found in the array " << endl;
//             return 1;
//             break;
//         }
//     }
// }

int linear_search(int array[], int size, int key)
{
    size = size - 1;
    if (size == -1)
    {
        return -1;
    }
    else if (array[size] == key)
    {
        return 1;
    }
    else
    {
        return linear_search(array, size, key);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int key;
    int array[50];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " array element:: "
             << "   ";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Entered  [" << i << " ] array element are :: "
             << "   ";
        cout << array[i] << endl;
    }
    cout << "Enter the key element " << endl;
    cin >> key;
    int result;
    result = linear_search(array, size, key);
    if (result == 1)
    {
        cout << "key is found in the array " << endl;
    }
    else
    {
        cout << "key is not found in the array " << endl;
    }
    return 0;
}