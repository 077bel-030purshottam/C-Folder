

// inheritaing the class
// #include <iostream>

// using namespace std;
// class A
// {
// public:
//     int a = 10;
// };
// class B : public A
// {
// public:
//     void display()
//     {
//         cout << "The value of a is " << a;
//     }
// };
// int main()
// {
//     B b1;
//     b1.display();

//     return 0;
// }

// *****************************************************************
#include <iostream>

using namespace std;
void d1()
{
    int a = 10;
    cout << "THe value of a is " << a << endl;
}
void d2()
{
    int b = 20;
    cout << "THe value of b is " << b << endl;
}
int main()
{

    int num = 1;
    switch (num)
    {
    case 1:
        d1();
        break;
    case 2:
        d2();
        break;

    default:
        cout << "invalid input" << endl;
    }

    return 0;
}