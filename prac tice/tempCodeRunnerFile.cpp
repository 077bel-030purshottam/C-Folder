#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    char str[100];
    cout << "Enter the first string " << endl;
    cin.get(str, 100);
    cout << "You have entered " << str << endl;

    char str1[80];
    cout << "Enter the second string " << endl;
    cin.get(str1, 100, '\n');

    return 0;
}