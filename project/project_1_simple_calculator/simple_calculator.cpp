#include <iostream>
#include <cstring >

using namespace std;

int main()
{

    // declaring the variables
    char str1[10];
    double num1, num2;
    char opera_tor;
    int res;

    // asking input from the user
    cout << "Enter the value of num1 " << endl;
    cin >> num1;
    cout << "Enter the value of num2 " << endl;
    cin >> num2;
    cout << "Enter the operator to perform any task " << endl;
    cin >> opera_tor;

    // operation on the calculator
    

        switch (opera_tor)
        {
        case '+':
            cout << "The sum is " << num1 + num2 << endl;

            break;

        case '-':
            cout << "The difference  is " << num1 - num2 << endl;
            break;

        case '*':
            cout << "The product  is " << num1 * num2 << endl;
            break;
        case '/':
            cout << "The division  is " << num1 / num2 << endl;
            break;
        case '%':
            cout << "The reminder is " << (int)num1 % (int)num2 << endl;
            break;
        default:
            cout << "Invalid operator " << endl;
        }

       
    return 0;
}
