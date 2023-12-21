// C++ program to Check Number is Palindrome or not
// A Palindrome number is a number that remains
// the same when its digits are reversed.

// For example: we take 121 and reverse it,
// after reverse it is same as original.
#include <iostream>

using namespace std;

int main()
{
    // int num = 121;
    int num = 110;
    int rem;
    int rev = 0;
    int i = 0;
    int no = num;
    while (no > 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }

    cout << "The reverse of the digit is " << rev << endl;
    if (rev == num)
    {
        cout << num << " is palindrome " << endl;
    }
    else
    {
        cout << num << " is not palindrome " << endl;
    }
    return 0;
}