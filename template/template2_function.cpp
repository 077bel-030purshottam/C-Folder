#include <iostream>
#include <cstring>

using namespace std;
template <typename T1>
void getdata(T1 a[5])
{
    cout << "Enter the data  " << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> a[i];
    }
}

template <typename T2>
void display(T2 name1[5])
{

    cout << "The data are " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << name1[i] << endl;
    }
}
int main()
{
    cout << "Enter the data related to string type data " << endl;
    // using string in temnplate;
    string s[5];
    getdata(s);
    display(s);
    display(s);

    // using another data type
    cout << "Enter the data related to integer type data " << endl;
    int x[5];
    getdata(x);
    display(x);
    display(x);
    return 0;
}