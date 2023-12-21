#include <iostream>
#include <cstring>

using namespace std;

struct employee
{
    int salary;
    int employ_id;
    string employ_name;
};
void printemploy(struct employee e)
{
    cout << e.employ_name << endl;
    cout << e.salary << endl;
    cout << e.employ_id << endl;
}
int main()
{
    struct employee e1, e2;

    // for the employee e1
    e1.employ_name = "ram";
    e1.salary = 25000;
    e1.employ_id = 25;

    // for the employee e2
    e2.employ_name = "shyam";
    e2.salary = 30000;
    e2.employ_id = 30;

    printemploy(e1);
    printemploy(e2);
    return 0;
}