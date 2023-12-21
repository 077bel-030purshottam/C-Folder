#include <iostream>

using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "show function from the base class " << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "show function from the derived class " << endl;
    }
};
int main()
{
    // B b1;
    // b1.show(); // this will call the derived class function only

    A *ptr;
    A a1;
    ptr = &a1;
    ptr->show();

    B b1;
    ptr = &b1;
    ptr->show();
    return 0;
}