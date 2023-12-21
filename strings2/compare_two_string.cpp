#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    // char s1[] = "purshottam";
    // char s2[] = "purshottam";
    // int result = strcmp(s1, s2);
    // cout << "The comparision result is " << result << endl;

    // *****************************************************************
    // taking input from the user we have
    // string s1;
    // string s2;

    // cout << "Enter the string s1" << endl;
    // getline(cin, s1);

    // cout << "Enter the string s2" << endl;
    // getline(cin, s2);

    // cout << "The inputed string are given below " << endl;
    // cout << s1 << endl;
    // cout << s2 << endl;
    // *****************************************************************
    // taking character type string as input consequently
    char str1[100];
    char str2[100];

    cout << "Enter the str1 character " << endl;
    // cin >> str1;     // take only one word as input
    cin.get(str1, 100); // take whole sentence  as input
    cin.ignore();
    cout << "Enter the str2 character " << endl;
    // cin >> str2;     // take only one word as input
    cin.get(str2, 100); // take whole sentence  as input

    cout << str1 << endl;
    cout << str2 << endl;

    // int result = strcmp(s1, s2);        // in this string we can not use strcmp function
    // cout << "The comparision is " << result << endl;
    int result = strcmp(str1, str2);
    cout << "The comparision of the two string is " << result << endl;
    // *******************************************************************
    return 0;
}