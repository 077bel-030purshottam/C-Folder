#include <iostream>
#include <cstring >
#include <iomanip>

const int m = 3;
using namespace std;

struct student
{
    string name;
    int rollnumber;
    int stdclass;
};

int main()
{

    struct student s1[m];
    cout << "Enter the names  of the student" << endl;
    for (int i = 0; i < m; i++)
    {
        getline(cin, s1[i].name);
    }
    cout << "Enter the roll number of the student" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> s1[i].rollnumber;
    }

    cout << "Enter the class of the student" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> s1[i].stdclass;
    }

    cout << " name of the student :: " << setw(13) << "  Roll number :: " << setw(13) << " student_class :: " << endl;

    for (int i = 0; i < m; i++)
    {
        cout << setw(16) << s1[i].name;
        cout << setw(16) << s1[i].rollnumber;
        cout << setw(16) << s1[i].stdclass;
        cout << endl;
    }

    return 0;
}