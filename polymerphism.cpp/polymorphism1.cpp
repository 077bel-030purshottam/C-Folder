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

    // void area()
    // {
    //     cout << "parent class area is called " << endl;
    //     // return 0;
    // }

    int area()
    {
        cout << "parent class area is called " << endl;
        return 0;
    }
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

    rectangle rec(2, 5);
    cout << rec.area() << endl;

    s = &rec;
    s->area();
    cout << endl;

    triangle tri(2, 5);
    cout << tri.area() << endl;
    
    s = &tri;
    s->area();
    return 0;
}