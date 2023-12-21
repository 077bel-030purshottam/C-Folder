
// sorting of the name using string
#include <iostream>
#include <cstring >
#include <list>

using namespace std;

int main()
{
    list<string> s1;
    string name[5];
    list<string>::iterator iter;
    iter = s1.begin();
    cout << "Enter the name of the student " << endl;
    for (int i = 0; i < 2; i++)
    {
        // cin >> name[i];
        getline(cin, name[i]);
        s1.push_back(name[i]);
    }
    s1.sort();
    cout << " the name of the student are " << endl;

    for (iter = s1.begin(); iter != s1.end(); iter++)
    {
        cout << *iter << " " << endl;
    }

    return 0;
}