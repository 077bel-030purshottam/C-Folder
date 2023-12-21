#include <iostream>

using namespace std;

class student
{
    int roll_num;

public:
    void setdata(int r)
    {
        roll_num = r;
    }
    int getdata()
    {
        return roll_num;
    }
    student()
    { // this is constructor
        cout << "object is being  created " << endl;
    }
    // this is destructor
    ~student()
    {
        cout << "object is being deleted " << endl;
    }
};
int main()
{
    student s1;
    s1.setdata(6);

    cout << "The value of a is " << s1.getdata() << endl;
    return 0;
}