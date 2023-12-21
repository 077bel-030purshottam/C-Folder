#include <iostream>
#include <list>

using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
}
int main()
{
    list<int> l1;
    list<int>::iterator iter;
    iter = l1.begin();

    cout << "Enter the list element " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> *iter;
        l1.push_back(*iter);
    }
    display(l1);
    return 0;
}