#include <iostream>

using namespace std;
int display(int x = 50)
{
    return x;
}
int main()
{
    int a = 10;
    cout << "The value of  the a is " << display();

    return 0;
}