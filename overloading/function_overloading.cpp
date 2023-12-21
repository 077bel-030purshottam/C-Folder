#include <iostream>

using namespace std;
class overloading
{

    string name;

public:
    int salary;
    float gpa;
    double percentage;

    void setdata(int s, float g, double p)
    {
        salary = s;
        gpa = g;
        percentage = p;
    }
    void display()
    {

        cout << "The salary  of a student is " << salary << endl;
        cout << "The gpa of a student is " << gpa << endl;
        cout << "The percentage of a student is " << percentage << endl;
    }
    void set1(string str)
    {
        name = str;
    }
    void set1()
    {
        cout << "The name of the student is " << name << endl;
    }
    void set1(char *ptr)
    {
        cout << "The other name of the student is " << ptr << endl;
    }
};
int main()
{
    int salar = 400;
    float gp = 30.65;
    double per = 56957.236;

    overloading s1;
    s1.setdata(salar, gp, per);
    s1.display();

    s1.set1("rohit");
    s1.set1();

    s1.set1("hello1 i am purshottam");
    return 0;
}
