#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    multimap<string, int> s_map;

    string name;

    int marks;

    cout << "Enter  the name and marks of the student " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> name >> marks;
        s_map.emplace(name, marks);
    }

    map<string, int>::iterator iter;
    cout << "  the name and marks of the student are " << endl;
    for (iter = s_map.begin(); iter != s_map.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    return 0;
}