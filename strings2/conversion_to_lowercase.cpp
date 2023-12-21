#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[50] = "PURSHOTTAM";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    cout << "The given string in lower case is given below " << str << endl;

    return 0;
}