#include <iostream>

using namespace std;
class pt
{
    string name;

public:
    int age;
    pt()
    {
        name = "purshottam thakur";
        age = 20;
    }
    void display()
    {
        cout << "Name = " << name << endl
             << "age=" << age << endl;
    }
};
int main()
{
    pt p1;
    p1.display();
    return 0;
}