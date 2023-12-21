// C++ Program to Find Size of int, float, double and char
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    float b = 20.0;
    double c = 50.23;
    char m = 'p';
    string name = "purshottamt";
    char d[10] = "hellow";
    short e = 1;
    long f = 50;
    bool cond = false;
    signed g = 10;
    unsigned h = 50;
    cout << "The size of the int is " << sizeof(int) << endl;
    cout << "The size of the float is " << sizeof(float) << endl;
    cout << "The size of the double is " << sizeof(double) << endl;
    cout << "The size of the char is " << sizeof(char) << endl;
    cout << "The size of the long is " << sizeof(long) << endl;
    cout << "The size of the short is " << sizeof(short) << endl;
    cout << "The size of the signed int  is " << sizeof(signed int) << endl;
    cout << "The size of the signed is " << sizeof(signed) << endl;
    cout << "The size of the unsigned is " << sizeof(unsigned) << endl;

    return 0;
}