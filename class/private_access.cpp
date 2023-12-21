#include <iostream>
#include <cstring>

using namespace std;
class privateaccess
{
private:
    int length;
    string name;

public:
    int breadth;
    int height;
    void setdata(int x);
    void setdata1(string str);
    int getdata();
    void displayname()
    {
        cout << name;
    }
};

void privateaccess::setdata(int x)
{
    length = x;
}
void privateaccess::setdata1(string str)
{
    name = str;
}

int privateaccess::getdata()
{

    return length * breadth * height;
}
int main()
{
    privateaccess A1;

    A1.setdata(5);
    A1.breadth = 4;
    A1.height = 6;
    double res = A1.getdata();
    cout << res << endl;
    A1.setdata1("purshottam");
    A1.displayname();
    return 0;
}