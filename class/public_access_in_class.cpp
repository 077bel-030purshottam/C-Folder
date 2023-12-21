// #include <iostream>
// #include <cstring >

// using namespace std;
// class student
// {
// public:
//     char stdname[20];
//     string name;
// };
// int main()
// {
//     student s1;
//     strcpy(s1.stdname, "purshottam");
//     s1.name = "rohit";
//     cout << "The name of the student is " << s1.stdname << endl;
//     cout << "The name of the student is " << s1.name << endl;
//     return 0;
// }

// ******************************************************************************************
#include <iostream>
#include <cstring >

using namespace std;
class student
{
public:
    char stdname[20];
    string name;

    void displaystudent()
    {

        cout << name << endl;
        cout << stdname << endl;
    }
};
int main()
{
    student s;
    strcpy(s.stdname, "purshottam");
    cout << s.stdname << endl;
    s.name = "Rohit";
    cout << s.name << endl;

    // displaying by the use of the function

    s.displaystudent();
    return 0;
}