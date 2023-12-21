#include <iostream>

using namespace std;
class A
{
    int a;

public:
    void getA()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
    }
    void putA()
    {
        cout << "A=" << a << endl;
    }
};
class B : public A
{
    int b;

public:
    void getB()
    {
        cout << "Enter the value of the b " << endl;
        cin >> b;
    }
    void putB()
    {
        cout << "B=" << b << endl;
    }
};
class C : public A
{
    int c;

public:
    void getC()
    {
        cout << "Enter the value of the c " << endl;
        cin >> c;
    }
    void putC()
    {
        cout << "C=" << c << endl;
    }
};
class D : public B, public C
{
    int d;

public:
    void getD()
    {
        cout << "Enter the value of the d " << endl;
        cin >> d;
    }
    void putD()
    {
        cout << "D=" << d << endl;
    }
};
int main()
{
    B b1; // To access the element of A we need tp create the object of the class B or class C
    b1.getA();
    b1.putA();

    // To access the element  class B and class C we can create object of the class D
    D d1;
    d1.getB();
    d1.getC();
    d1.getD();
    cout << "The value of the b c and d are " << endl;
    d1.putB();
    d1.putC();
    d1.putD();
    return 0;
}