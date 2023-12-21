#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    char s1[50];
    char s2[50];
    char s3[50];
    cout << "Enter the s1" << endl;
    cout << "Enter the s2" << endl;

    cin.get(s1, 50);
    cin.ignore(); // cin.ignore() is necessary to input two char respectively
    cin.get(s2, 50);

    cout << "The s1 is :" << s1 << endl;
    cout << "The s2 is :" << s2 << endl;

    cout << "The copied string  s3 : " << strcpy(s3, s2) << endl;

    return 0;
}