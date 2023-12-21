#include <iostream>

using namespace std;
class Box
{
    double length, breadth, height;

public:
    Box(double l = 2.0, double b = 3.0, double h = 4.0)
    {
        cout<<"constructor called"<<endl;
        length = l;
        breadth = b;
        height = h;
    }
    int getvolume()
    {
        double volume = length * breadth * height;
        return volume;
    }
    int compare(Box box)
    {
        return this->getvolume() > box.getvolume();
    }
    void diipaly()
    {
        cout << getvolume() << endl;
    }
};
int main()
{
    // Box box1;                    // this will take the default values if value  no given in constructor
    // box1.getvolume();
    // box1.diipaly();

    Box box1(4, 5, 6);
    box1.getvolume();
    box1.diipaly();

    Box box2(10, 20, 30);
    // Box box2(3, 4, 5);
    box2.getvolume();
    box2.diipaly();

    if (box1.compare(box2))
    {
         

        cout << "box1 is larger then box2 " << endl;
    }
    else
    {
        cout << "box2 is larger then box1 " << endl;
    }
    return 0;
}