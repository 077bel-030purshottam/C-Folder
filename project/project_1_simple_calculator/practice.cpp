#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // for the integer type
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // ************************************************************

    char str1[10];
    char str2[10] = "yes";
    int num1, num2;
    int res;
    cout << "Enter num1 and num2" << endl;
    cin >> num1 >> num2;
    cout << "yes or no " << endl;
    cin >> str1;

    while (res = strcmp(str1, str2) == 0)
    {
        cout << num1 + num2 << endl;
        break;
    }
    return 0;
}