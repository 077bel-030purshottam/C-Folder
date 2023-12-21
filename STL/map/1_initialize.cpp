#include <iostream>
#include <map>
#include <cstring>

using namespace std;
// map is an associative array
int main()
{
    map<string, int> stdmark;
    stdmark["purshottam"] = 98;
    // stdmark["rohit"] = 80;
    // stdmark["sachin"] = 70;
    map<string, int>::iterator itr;
    // stdmark.insert({"rohan", 50});
    for (itr = stdmark.begin(); itr != stdmark.end(); itr++)
    {
        cout << (*itr).first << " = " << (*itr).second << endl;
    }
    cout << "The size is " << stdmark.size() << endl;
    cout << "The maximum size is " << stdmark.max_size() << endl;
    cout << "The empty size is " << stdmark.empty() << endl;
    return 0;
}