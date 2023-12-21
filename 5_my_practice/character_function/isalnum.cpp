#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    cout << "isalnum = " << isalnum('5') << endl;
    cout << "isalpha = " << isalpha('a') << endl;
    cout << "isdigit = " << isdigit('1') << endl;
    cout << "islower = " << islower('a') << endl;
    cout << "isupper = " << isupper('A') << endl;
    cout << "toupper = " << toupper('a') << endl;
    cout << "tolower= " << tolower('A') << endl;
    cout << "isxdigit= " << isxdigit('5') << endl;

    return 0;
}