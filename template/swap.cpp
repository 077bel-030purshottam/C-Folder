#include <iostream>

using namespace std;
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    swapp(x, y);
    cout << "x:=" << x << endl
         << "y:="
         << y << endl;

    string s1 = "purshottam";
    string s2 = "rohit";
    swapp(s1, s2);
    cout << "s1= " << s1 << endl;
    cout << "s2= " << s2 << endl;
    return 0;
}