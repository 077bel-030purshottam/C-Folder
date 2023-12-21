#include <iostream>

using namespace std;
class employee
{
    int salary;

public:
    static int count;
    void setdata(int s)
    {
        salary = s;
        cin >> salary;
    }
    void display()
    {
        cout << "The salary of the employee " << count + 1 << " is " << salary << endl;
        count++;
    }
};
int employee::count = 0;
int main()
{
    employee emp[10];
    int sa;
    cout << "Enter the salary " << endl;
    for (int i = 0; i < 2; i++)
    {
        emp[i].setdata(sa);
    }
    for (int i = 0; i < 2; i++)
    {
        emp[i].display();
    }

    return 0;
}