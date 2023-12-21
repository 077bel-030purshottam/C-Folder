#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    int age;
    string name;
    cout << "Enter the age " << endl;
    cin >> age;
    cin.ignore();
    cout << "Enter the name" << endl;
    getline(cin, name);
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;

    return 0;
}