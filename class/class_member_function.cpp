#include <iostream>

using namespace std;
class Box
{
public:
    int l;
    int b;
    int h;
    void setdata(int x, int y, int z);

    double get_volume();
};
void Box::setdata(int x, int y, int z)
{
    l = x;
    b = y;
    h = z;
}
double Box::get_volume()
{

    return l * b * h;
}

int main()
{

    Box B1, B2;
    B1.setdata(1, 2, 3);
    B2.setdata(4, 5, 6);
    cout << B1.get_volume() << endl;
    cout << B2.get_volume() << endl;

    return 0;
}