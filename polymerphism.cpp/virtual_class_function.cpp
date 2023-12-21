#include <iostream>

using namespace std;
class shape
{
protected:
    int base;
    int height;

public:
    shape(int b = 0, int h = 0)
    {
        base = b;
        height = h;
    }

    virtual int area()
    {
        cout << "parent class area is called " << endl;
        return 0;
    }


    // for the pure virtual class we have the syntax 
    // virtual int area()=0;
};
class rectangle : public shape
{

public:
    rectangle(int a = 0, int b = 0) : shape(a, b) {}
    int area()
    {
        cout << "rectangle class area " << endl;
        return base * height;
    }
};

class triangle : public shape
{
public:
    triangle(int a = 0, int b = 0) : shape(a, b) {}
    int area()
    {
        cout << "Triangle class  area " << endl;
        return (base * height) / 2;
    }
};
int main()
{
    shape *s;
    triangle tri(2, 5);
    s = &tri;
    s->area();

    rectangle rec(2, 5);
    s = &rec;
    s->area();

    return 0;
}