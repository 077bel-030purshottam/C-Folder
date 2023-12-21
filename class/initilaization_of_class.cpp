#include <iostream>

using namespace std;
class box
{

public:
    int lentgth;
    int breadth;
    int height;
};
int main()
{
    box b1, b2; //  here b1 and b2 are the objects
    double volume;
    // for the object 1
    b1.lentgth = 20;
    b1.breadth = 20;
    b1.height = 20;

    // for the object 2
    b2.lentgth = 30;
    b2.breadth = 30;
    b2.height = 30;

    // displaying the object b1
    cout << "The box1 measurement " << endl;
    cout << "length =" << b1.lentgth << endl;
    cout << "breadth =" << b1.breadth << endl;
    cout << "height  =" << b1.height << endl;

    // displaying the object b2
    cout << "The box2 measurement " << endl;
    cout << "length =" << b2.lentgth << endl;
    cout << "breadth =" << b2.breadth << endl;
    cout << "height  =" << b2.height << endl;

    // volume of the box1 is given by
    volume = b1.lentgth * b1.breadth * b1.height;
    cout << "THe volume of the box1 is " << volume << endl;

    // volume of the box2 is given by
    volume = b2.lentgth * b2.breadth * b2.height;
    cout << "THe volume of the box2 is " << volume << endl;

    return 0;
}