// This is an example of the abstract classes in c++

#include <iostream>

using namespace std;
class shape
{
protected:
    int base;
    int height;

public:
    shape(int b, int h)
    {
        base = b;
        height = h;
    }
    virtual int getarea() = 0;
};
class rectangle : public shape
{
public:
    rectangle(int b = 0, int h = 0) : shape(b, h)
    {
    }
    int getarea()
    {
        return base * height;
    }
};

class triangle : public shape
{
public:
    triangle(int b = 0, int h = 0) : shape(b, h)
    {
    }
    int getarea()
    {
        return (base * height) / 2;
    }
};
int main()
{
    shape *s;
    rectangle rec(2, 3);
    triangle tri(4, 5);
    s = &rec;
    cout << "The area of the raectangle is " << s->getarea() << endl;
    s = &tri;
    cout << "The area of the triangle  is " << s->getarea() << endl;

    return 0;
}