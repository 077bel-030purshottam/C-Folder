#include <iostream>

using namespace std;
class purshottam
{

    int money;

public:
    purshottam(int m = 2)
    {
        cout << "Constructor is called " << endl;
        money = m;
    }
    int getdata()
    {
        return money;
    }
    friend void display(purshottam pt); // displaying by the help of point function
};

void display(purshottam pt)
{
    cout << "THe total amount of maoney with purshottam is Rs "
         << pt.getdata() << endl;
}
int main()
{
    // purshottam pt(1);        // displaying with out the help of the pointer
    // display(pt);

    purshottam pt1(5);
    purshottam *ptr;
    ptr = &pt1;
    ptr->getdata();
    display(*ptr);
    return 0;
}