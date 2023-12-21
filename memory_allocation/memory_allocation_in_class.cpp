#include <iostream>

using namespace std;
class Box
{
public:
    Box()
    {
        cout << "The constructer is called " << endl;
    }
    ~Box()
    {
        cout << "The dectructer  is called " << endl;
    }
};
int main()
{
    Box *boxarray = new Box[2];
    delete[] boxarray; // delete array box
    return 0;
}