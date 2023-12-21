#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m;

    int key, value;

    key = 5;
    value = 40;

    m.emplace(key, value);

    key = 4;
    value = 30;

    // m.insert({key, value});

    for (const auto &item : m)
    {
        cout << "{ " << item.first << ", " << item.second << " } ";
    }
    cout << '\n';

    return 0;
}