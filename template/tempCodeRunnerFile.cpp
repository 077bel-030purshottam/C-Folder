#include <iostream>
#include <cstring>

using namespace std;
template <typename T>
void getdata(T a[5])
{
    cout << "Enter the name of the people " << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> a[i];
    }
}
void display(string name1[5])
{

    cout << "The name of the people are " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << name1[i] << endl;
        cout << name1[i] << endl;
    }
}
int main()
{
    string s[5];
    getdata(s);
    display(s);
    return 0;
}