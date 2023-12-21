#include <iostream>
#include <map>
#include <cstring >

using namespace std;

int main()
{
    // map<int, int> m;
    // m[10] = 10;
    // map<int, int>::iterator iter;
    // for (iter = m.begin(); iter != m.end(); iter++)
    // {
    //     cout << (*iter).first << "  " << (*iter).second << endl;
    // }

    // *****************************************************************************************

    // next method  in mapping
    map<string, int> m;
    string name = "purshottam";
    int marks = 100;
    m.emplace(name, marks);
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << "  name is " << (*it).first << " marks =" << (*it).second << endl;
    }

    return 0;
}