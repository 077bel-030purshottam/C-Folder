#include <iostream>

using namespace std;
class box
{
    int width;
    int height;
    int depth;

public:
    box(void)
    {
        cout << "Default constructor called" << endl;
        width = 4;
        height = 8;
        depth = 10;
    }
    box(int w, int h, int d)
    {
        cout << "Parametrized constructor called" << endl;
        width = w;
        height = h;
        depth = d;
    }
    box(box &b)
    {
        cout << "Copy constructor called " << endl;
        width = b.width;
        height = b.height;
        depth = b.depth;
    }
    void volume()
    {
        cout << "volume = " << width * height * depth << endl;
    }
};
int main()
{
    box b1;
    b1.volume();
    box b2(1, 2, 3);
    b2.volume();
    box b3(b1);
    b3.volume();
    return 0;
}