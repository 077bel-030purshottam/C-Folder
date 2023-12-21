#include <iostream>
#include <cstring >

using namespace std;
template <class t1, class t2, class t3>
class student
{
public:
    t1 data1;
    t2 data2;
    t3 data3;
    student(t1 a, t2 b, t3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << "roll number    : = " << this->data1 << endl
             << "marks obtained : = " << this->data2 << endl
             << "name of student: = " << this->data3 << endl
             << endl;
    }
    int sum()
    {
        return data1 + data2 + data3;
    }
};
int main()
{
    int roll;
    float marks;
    string name;
    cout << "Enter the rollnumber " << endl;
    cin >> roll;

    cout << "Enter the marks obtained  " << endl;
    cin >> marks;
    cin.ignore();

    cout << "Enter the name of the student  " << endl;
    getline(cin, name);

    student<int, float, string> s1(roll, marks, name);
    s1.display();

    student<int, int, int> num(10, 20, 30);
    int result = num.sum();
    cout << "The addition of three numbers are " << result << endl;

    return 0;
}