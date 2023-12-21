// // C++ Program to Check given number is Armstrong or Not
// // Armstrong number is a number that is the sum of its own digits each raised
// // to the power of the number of digits is equal to the number itself. Some
// // Armstrong numbers is 0, 1, 153, 370, 371, 407, 1634 etc.
// #include <iostream>

// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter the number " << endl;
//     cin >> num;
//     int rem;
//     int sum = 0;
//     int no;
//     no = num;
//     while (no != 0)
//     {
//         rem = no % 10;
//         sum += rem * rem * rem;
//         no = no / 10;
//     }
//     if (sum == num)
//     {
//         cout << "The numer is armstrong number " << endl;
//     }
//     else
//     {
//         cout << "The numer is not  armstrong number " << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum > 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}