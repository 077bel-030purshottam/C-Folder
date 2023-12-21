#include <iostream>

using namespace std;
#define size 2
int main()
{

    int array[100];
    int *ptr = &array[0];
    cout << "Enter the element of the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    return 0;
}