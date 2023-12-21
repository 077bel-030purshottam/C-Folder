#include <iostream>
#include <list>

using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{

    list<int> l1;
    list<int>::iterator iter;
    iter = l1.begin();
    cout << "Enter the element of list 1" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *iter;
        l1.push_back(*iter);
    }
    display(l1);

    list<int> l2;
    list<int>::iterator it;
    it = l2.begin();
    cout << "Enter the element of list 2" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *it;
        l2.push_back(*it);
    }
    display(l2);

    cout << "After merging " << endl;
    l1.merge(l2);
    display(l1);
    return 0;
}