#include <iostream>

using namespace std;
class student
{
    string name;
    int id;

public:
    student(string str, int idd)
    {
        name = str;
        id = idd;
    }
    void display()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The id of the student is " << id << endl;
    }
};
int main()
{
    student s1("purshottam", 50);
    s1.display();
    return 0;
}