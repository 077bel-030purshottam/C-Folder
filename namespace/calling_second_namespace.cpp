#include <iostream>
using namespace std;
namespace first_space
{
    void sum(int a = 10, int b = 20)
    {
        cout << "The sum  is " << a + b << endl;
    }
}
namespace second_space
{
    void sum(int a = 50, int b = 10)
    {
        cout << "The sum  is " << a + b << endl;
    }
}
using namespace second_space;
int main()
{
    sum();
    return 0;
}