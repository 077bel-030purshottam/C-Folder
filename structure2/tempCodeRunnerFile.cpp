#include <iostream>
#include <iomanip>

using namespace std;
typedef struct employee
{
    string emp_name;
    int emp_id;
    int emp_salary;

} E1;
int main()
{

    int size;
    cout << "Enter the number of the emplyee " << endl;
    cin >> size;
    E1 e[5];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name , id and salary   of employee " << i + 1 << endl;
        cin >> e[i].emp_name;
        cin >> e[i].emp_id;
        cin >> e[i].emp_salary;
    }
    cout << "  Name of employee  " << setw(15) << "  id number of the employee  "
         << setw(13) << " salary  " << endl;

    for (int i = 0; i < size; i++)
    {

        cout << setw(13) << e[i].emp_name;
        cout << setw(15) << e[i].emp_id;
        cout << setw(30) << e[i].emp_salary;
    }

    return 0;
}