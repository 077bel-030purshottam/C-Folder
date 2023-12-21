#include <iostream>

using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int in)
    {
        feet = f;
        inches = in;
    }
    void display()
    {
        cout << "feet="
             << " "
             << feet << " and inches =" << inches << endl;
    }
    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
};
int main()
{
    Distance d1(10, 20), d2(30, 40);
    -d1;
    d1.display();
    -d2;
    d2.display();

    return 0;
}