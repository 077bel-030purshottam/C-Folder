#include <iostream>

using namespace std;

int main()
{
    int size;
    int age[size];
    cout << "Enter the size of the age" << endl;
    cin >> size;
    cout << "Enter the age of the people" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> age[i];
    }
    cout << " the age of the people" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << age[i] << endl;
    }
    return 0;
}