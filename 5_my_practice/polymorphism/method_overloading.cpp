#include <iostream>

using namespace std;
class method
{
public:
    void test()
    {
        cout << "The function without any argument " << endl;
    }
    void test(int a)
    {
        cout << "The function with  one argument is " << a << endl;
    }
    void test(int a, int b)
    {
        cout << "The function with 2  argument with sum is " << a + b << endl;
    }
};
int main()
{
    method m;
    m.test();
    m.test(1);
    m.test(1, 2);
    return 0;
}