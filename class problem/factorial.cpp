
// C++ program to find factorial by defining functions outside the class

#include <iostream>

using namespace std;
class factorial
{
private:
    int num;

public:
    void get_num()
    {
        cout << "Enter the value of the number  " << endl;
        cin >> num;
    }
    int factorial_num(int x);
};
int factorial::factorial_num(int x)
{
    {
        num = x;
        if (x == 0 || x == 1)
        {
            return 1;
        }
        else
        {
            return x * factorial_num(x - 1);
        }
    }
}
int main()
{
    factorial f1;
    f1.get_num();
    int res = f1.factorial_num(5);
    cout << "The factorial of the number is " << res << endl;
    return 0;
}