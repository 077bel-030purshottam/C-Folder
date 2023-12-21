#include <iostream>

using namespace std;
namespace A
{
    int a = 10;
    int area(int x)
    {
        // cout << "The area is " << x * x << endl;
        return x * x;
    }

}
namespace B
{
    int b = 12;

}
int main()
{

    cout << "The value of the a  is " << A::a << endl;
    cout
        << "The value of the b  is " << B::b << endl;
    int res = A::area(B::b);
    cout << "The area of the integer of namespace B is " << res << endl;
    return 0;
}