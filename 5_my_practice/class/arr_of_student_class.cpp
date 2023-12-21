#include <iostream>

using namespace std;
class student
{
public:
    string name;
    int id;
    void display()
    {
        cout << "The name of the student is "
             << name << " with id number " << id << ":" << endl;
    }
};
int main()
{
    student s1;
    s1.name = "purshottam";
    s1.id = 200;
    s1.display();
    return 0;
}