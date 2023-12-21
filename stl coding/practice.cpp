

#include <iostream>

using namespace std;
class myclass
{

    int a, b;
    string name;
    char str[50];

public:
    // myclass(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }
    void getdata(int m, int n, string name1, char str1[50])
    {
        a = m;
        b = n;
        name = name1;
        str[50] = str1[50];
    }
    void display()
    {
        cout << "The value of the a and b is " << a << " and " << b << endl;
        cout << "My name is " << name << endl;
        cout << "My another name is " << str << endl;
    }
};
int main()
{
    // myclass m1(5, 6);
    // m1.display();
    myclass m2;
    m2.getdata(5, 6, "raju gupta ", " purshottam ");
    m2.display();

    return 0;
}