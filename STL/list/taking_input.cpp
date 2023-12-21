#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1;
    list<int>::iterator iter;
    iter = l1.begin();
    cout << "Enter the element of the list " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *iter;
        l1.push_back(*iter);
    }

    cout << "the element of the list  are " << endl;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << " ";
    }

    // ****************************************************************
    // no need to make another iterator in the main function to display the
    // same list in the main function

    // list<int>::iterator it;
    // cout << "the element of the list  are " << endl;
    // for (it = l1.begin(); it != l1.end(); it++)
    // {
    //     cout << *it << " ";
    // }
// ************************************************************************
    return 0;
}