#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // cout << greeting;

    // string class type string

    // string greeting = "hello";
    // cout << "Greeting message : " << greeting;

    string s1 = "hellow";
    string s2 = "purshottam";
    string s3 = "how";
    string s4 = "are";
    string s5 = "you  are very smart ?";
    string s6;
    string s7;

    // cout << s1 << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    // cout << s4 << endl;
    // cout << s5 << endl;

    // copies string
    s6 = s5;
    cout << "After copes we have s6 " << endl
         << s6 << endl;

    // to concatenates the string we have
    s7 = s4 + s5;
    cout << "After concatenates we have s7 " << endl
         << s7 << endl;

    // to find the string length we have
    int length = s1.size();
    cout << "The size of the string s1 is " << length << endl;

    // character type string

    // char c[20] = "hellow hor are you";
    // char d[20];
    // char e[20] = "good morning";
    // char f[20] = "good afternoon";
    // strcpy(d, c);
    // cout << "strcpy(d,c) : = " << d << endl;

    // strcat(e, f);
    // cout << "strcat(e,f) : = " << e << endl;

    // int len;
    // cout << "The length  of the string f  is " << strlen(f) << endl;

    return 0;
}