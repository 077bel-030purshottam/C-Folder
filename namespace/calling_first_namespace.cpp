// #include <iostream>

// using namespace std;
// namespace first_space
// {
//     void func()
//     {
//         cout << "inside the first space " << endl;
//     }
// }

// namespace second_space
// {
//     void func()
//     {
//         cout << "inside the second  space " << endl;
//     }
// }
// using namespace first_space;
// int main()
// {
//     func();
//     return 0;
// }

// **************************************************************************************************************

//  the program with the same concept

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
using namespace first_space;
int main()
{
    sum();
    return 0;
}