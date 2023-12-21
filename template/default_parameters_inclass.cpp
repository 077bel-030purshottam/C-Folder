#include <iostream>

using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class myclass
{
public:
    t1 a;
    t2 b;
    t3 c;
    myclass(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    myclass<> my(30, 12.5, 'p');
    my.display();
    cout << endl;
    myclass<int, char, string> my1(30, 'p', "purshottam");
    my1.display();
    cout << endl;
    return 0;
}