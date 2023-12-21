#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list1;
    list<int>::iterator iter;
    iter = list1.begin();
    cout << "Enter the marks of the student  " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *iter;
        list1.push_back(*iter);
    }

    cout << "The marks  are " << endl;
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        list1.sort();
        cout << *iter << " ";
    }

    return 0;
}