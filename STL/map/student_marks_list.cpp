#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    map<string, int> mymap;
    mymap["purshottam"] = 400;
    mymap["rohan"] = 200;
    mymap["rohit"] = 500;
    map<string, int>::iterator itr;
    for (itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    return 0;
}