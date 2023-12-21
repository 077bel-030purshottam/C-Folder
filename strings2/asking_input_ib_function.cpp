#include <iostream>

using namespace std;
void takeinput(string s[5])
{
    cout << " enter the name of the peole  " << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> s[i];
    }
}
void displayinput(string s1[5])
{
    cout << " the name of the peole  you  ahve entered are " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << s1[i] << endl;
    }
}
int main()
{
    string name[5];
    takeinput(name);
    displayinput(name);
    return 0;
}