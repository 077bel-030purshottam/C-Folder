// #include <iostream>

// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter the size of the array" << endl;
//     cin >> size;
//     int marks[size];
//     cout << "Enter the element  of the array" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> marks[i];
//     }

//     cout << " the element  of the array are " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout << marks[i] << endl;
//     }
//     return 0;
// }

// ************************************************************************************

// by the of the pointer the memory allocation is given by

#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int *marks;
    marks = new int;
    cout << "Enter the element  of the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    cout << " the element  of the array are " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << (*marks) << endl;
        // cout << (*marks + 1) << endl;
        marks++;
    }

    return 0;
}
