#include <iostream>

using namespace std;

int main()
{
    int a = 60;
    float b = 50.23;
    float large = (a > b) ? a : b;
    cout << "The large value is " << large << endl;

    int marks = 30;
    string result = (marks > 40) ? "passed" : "failed";
    cout << result << endl;

    int marks1 = 50;
    string result1 = (marks1 > 40) ? "passed" : "failed";
    cout << result1 << endl;

    return 0;
}