#include <iostream>
#include <cstring >
#include <iomanip >

using namespace std;
struct student
{
    int roll_num;
    // char name[50];
    string fullname;
};
int main()
{
    // cin >> s1.fullname;           //this will take only purshottam if we give purshottam thakur as input
    // better use getline function
    struct student s1;
    cout << "Enter the name  of the student " << endl;
    getline(cin, s1.fullname);
    cout << "Enter the roll number  of the student " << endl;
    cin >> s1.roll_num;

    cout << "Your full name is " << s1.fullname << endl;
    cout << "Your roll numer is  is " << s1.roll_num << endl;

    return 0;
}