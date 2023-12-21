#include <iostream>
#include <list>

using namespace std;
static int count = 0;
int main()
{

    list<int> list1;
    list<int>::iterator iter;
    iter = list1.begin();
    int large = 0;
    cout << "Enter the marks of the student " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *iter;
        list1.push_back(*iter);
    }

    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        list1.sort();
        cout << "The marks of the student: " << count + 1 << " is " << *iter << endl;
        count++;
    }
    cout << "The max sixe is " << list1.max_size() << endl;

    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        if (*iter > large)
        {
            large = *iter;
            list1.push_back(large);
        }
    }
    cout << large << endl;

    return 0;
}