#include <iostream>

using namespace std;
const int m = 3;
class pranish
{
    string exname;

public:
    static int count;
    void setname(string name)
    {
        exname = name;
        count++;
    }
    void display()
    {
        cout << "The name of the exgirlfriend are  "
             << exname << " with exgirlfriend number  " << count << endl;
    }
};
int pranish::count = 0;
int main()
{
    pranish ex[50];
    string name1[m];
    cout << "Enetr the name  of exgirlfriend " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> name1[i];
    }

    for (int i = 0; i < m; i++)
    {
        ex[i].setname(name1[i]);
        ex[i].display();
    }

    return 0;
}