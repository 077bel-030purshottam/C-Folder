#include <iostream>
using namespace std;
namespace first_space
{
    int sum(int a = 10, int b = 20)
    {
        return a + b;
    }
}
namespace second_space
{
    int sum(int a = 50, int b = 10)
    {
        return a + b;
    }
}
int main()
{
    cout << first_space::sum() << endl;
    cout << second_space::sum() << endl;
    return 0;
}