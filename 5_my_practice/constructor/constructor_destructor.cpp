#include <iostream>

using namespace std;
class box
{
    int width;
    int height;
    int depth;

public:
    box(int w, int h, int d)
    {
        cout << "THe paremetrized constructor called" << endl;
        width = w;
        height = h;
        depth = d;
    }
    ~box()
    {
        cout << "The destructor is called " << endl;
    }
    void volume()
    {
        cout << "The volume is " << width * height * depth << endl;
    }
};
int main()
{
    box b1(10, 2, 3), b2(1, 2, 3);
    b1.volume();
    b2.volume();
    cout << "Enter into block " << endl;
    {
        box b3(4, 5, 6);
    }
    return 0;
}