#include <iostream>
#include <cstring>

using namespace std;

void calculate()
{

    // declaring the variables

    double num1, num2;
    char opera_tor;

    // asking input from the user
    cout << "Enter the value of num1 " << endl;
    cin >> num1;
    cout << "Enter the value of num2 " << endl;
    cin >> num2;
    cout << "Enter the operator to perform any task " << endl;
    cin >> opera_tor;

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
        cout << " math syntax error " << endl;
    }
}

int main()
{

    calculate();
    char str1[10];
    int res;

    for (int i = 0; i < 1; i++)
    {
        cout << "do you want to do more calculation "
             << "yes or no " << endl;
        cin >> str1;

        if (res = strcmp(str1, "yes") == 0)
        {
            calculate();
        }
        else if (res = strcmp(str1, "no") == 0)
        {
            cout << "ok no problem see you next time " << endl;
            break;
        }
        --i;
    }
    return 0;
}