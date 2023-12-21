#include <iostream>

using namespace std;
namespace first_space
{
    void func()
    {
        cout << "inside the first space " << endl;
    }
}

namespace second_space
{
    void func()
    {
        cout << "inside the second  space " << endl;
    }
}
int main()
{
    first_space::func();
    second_space::func();
    return 0;
}