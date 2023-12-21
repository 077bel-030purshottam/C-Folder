#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> list1;
    list<int>::iterator iter;
    iter = list1.begin();
    cout << "Enter the marks of the student " << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> *iter;
    }
    cout << " the marks of the student are " << endl;
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter;
    }

    return 0;
}