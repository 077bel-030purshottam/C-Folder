#include <iostream>
#include <list >

using namespace std;

int main()
{
    list<int> list1;

    int arr[5];
    list<int>::iterator iter;
    iter = list1.begin();
    cout << "Enter the array element " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        list1.push_back(arr[i]);
    }

    // displaying the array element by iterator
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    // sorting of the array
    cout << "After sorting we have " << endl;
    list1.sort();
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter << " ";
    }
    return 0;
}