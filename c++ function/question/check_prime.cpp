
// C++ Program to Check Prime Number
#include <iostream>

using namespace std;
int check_prime(int num)
{
    bool is_prime = true;
    if (num <= 1)
    {
        is_prime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
    {
        cout << "it is prime number " << endl;
    }
    else
    {
        cout << "it is not  prime number " << endl;
    }
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    check_prime(num);
    return 0;
}