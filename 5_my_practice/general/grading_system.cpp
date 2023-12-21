#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks of the student " << endl;
    cin >> marks;

    if (marks >= 70)
    {
        cout << "The grade is "
             << "A" << endl;
    }

    else if (marks >= 60 && marks < 70)
    {
        cout << "The grade is "
             << "B" << endl;
    }

    else if (marks >= 50 && marks < 60)
    {
        cout << "The grade is "
             << "C" << endl;
    }
    else if (marks >= 40 && marks < 50)
    {
        cout << "The grade is "
             << "D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}