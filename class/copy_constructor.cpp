#include <iostream>

using namespace std;
class student
{
private:
    int *ptr;

public:
    int getdata();
    student(int roll);           // normal constructor
    ~student();                  // destructor
    student(const student &obj); // copy constructor
};

student ::student(int roll)
{
    cout << "normal constructor allocating ptr" << endl;
    // allocating memory for the pointer
    ptr = new int;
    *ptr = roll;
}
student ::student(const student &obj)
{

    cout << "copy constructor allocating ptr " << endl;

    ptr = new int;
    *ptr = *obj.ptr; // copy the  value
}
student ::~student()
{
    cout << "Freeing memeory ! " << endl;
    delete ptr;
}

int student ::getdata()
{
    return *ptr;
}
void display(student obj)
{
    cout << "roll_number ofthe student is " << obj.getdata() << endl;
}
int main()
{

    student rolnum(10);
    display(rolnum);

    return 0;
}