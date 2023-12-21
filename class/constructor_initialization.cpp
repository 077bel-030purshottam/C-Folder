#include <iostream>

using namespace std;
class line
{
    int length;

public:
    void setlength(int x);
    int getlength();
    line();         // this is constructor 
};

void line::setlength(int x)
{
    length = x;
}
int line::getlength()
{
    return length;
}

line::line()
{
    cout << "The constructer is already created " << endl;
}
int main()
{
    line l1;
    l1.setlength(5);
    int value = l1.getlength();
    cout << "The value of the private member is " << value << endl;
    return 0;
}