#include <iostream>

using namespace std;
class Box
{
    int length;
    float breadth;
    double height;

public:
    void setdata(int l, float b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double getvolume()
    {
        return length * breadth * height;
    }
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};
int main()
{
    Box box1, box2, box3;
    box1.setdata(1, 2.5, 25.5);
    box2.setdata(1, 3.5, 55.5);

    cout << "volume = " << box1.getvolume() << endl;
    cout << "volume = " << box2.getvolume() << endl;

    box3 = box1 + box2;
    cout << "volume = " << box3.getvolume() << endl;

    return 0;
}