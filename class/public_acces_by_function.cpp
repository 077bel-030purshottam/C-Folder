#include <iostream>

using namespace std;
class area
{
public:
    int length;
    int breadth;
    void setdata(int x, int y);
    int getdata();
};
void area::setdata(int x, int y)
{
    length = x;
    breadth = y;
}

int area::getdata()
{
    return length * breadth;
}
int main()
{
    area A;
    A.setdata(4, 5);
    int res = A.getdata();
    cout << "The area of the required shape is " << res << endl;
    return 0;
}