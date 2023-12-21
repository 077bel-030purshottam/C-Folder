#include <iostream>

using namespace std;
class student
{
    int roll;

protected:
    int marks;

public:
    void setdetail(int roll_num, int m)
    {
        roll = roll_num;
        marks = m;
    }
    void display1()
    {
        cout << roll << endl;
    }
};

class school : public student
{
public:
    void display()
    {
        cout << marks << endl;
    }
};
int main()
{

    school s1;
    school *s;
    s = &s1;

    // by the help of the object
    // s1.setdetail(20, 200);
    // s1.display();
    // s1.display1();

    // by the help of the pointer
    s->setdetail(10, 300);
    s->display1();
    s->display();

    return 0;
}