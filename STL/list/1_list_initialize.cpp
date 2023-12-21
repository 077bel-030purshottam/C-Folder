#include <iostream>
#include <list >

using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;

    cout << "The element of list are " << endl;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of zero length

    // giving input to the list1
    list1.push_back(50000);
    list1.push_back(5);
    list1.push_back(55);
    list1.push_back(755);
    list1.push_back(1000);
    display(list1);

    // removing element from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(500);

    // // accessing list1 elemet by iterator
    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;

    // displaying by the use of the function

    list1.sort(); // sorting the element
    display(list1);

    // *******************************************************************
    // from here list 2
    list<int> list2(3); // empty list of size 7
    // giving list2 elemnt individually
    list<int>::iterator iter = list2.begin();
    // *iter = 45;
    // iter++;
    // *iter = 40;
    // iter++;
    // *iter = 98;
    // iter++;
    // display(list2);

    // we can use loop for accessing the list 2 element
    cout << "Enter the element of list " << endl;
    for (int i = 0; i < list2.size(); i++)
    {
        cin >> *iter;
        iter++;
    }
    list2.sort();
    display(list2);

    // ******************************************************
    // merging list1 and list2
    list1.merge(list2);
    cout << "list1 after merging is " << endl;
    display(list1);

    // ************************************************************

    // reversing the list1 and displaying
    list1.reverse();
    cout << "\nlist1 after reversing  is " << endl;
    display(list1);
    return 0;
}