#include <iostream>

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
        cout << "Roll num is " << this->data1 << endl
             << "marks = " << this->data2 << endl
             << "student name :" << this->data3 << endl;
    }
};
int main()
{
    student<int, float, char> s1(20, 25.5, 'p');
    s1.display();

    // use of the string in the template
    student<int, float, string> s2(20, 25.5, "rohit");
    s2.display();

    return 0;
}