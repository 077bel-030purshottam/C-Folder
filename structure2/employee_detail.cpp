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
        cout << "Enter the name of the employee with the employee number : " << i + 1 << endl;
        cin >> e[i].emp_name;
        cout << "Enter the id number  of the employee number with employee number" << i + 1 << endl;
        cin >> e[i].emp_id;
        cout << "Enter the salary   of the employee with the employee number  " << i + 1 << endl;
        cin >> e[i].emp_salary;
    }
    cout << setw(7) << "  Name of employee  " << setw(15) << "  id number of the employee  "
         << setw(13) << " salary  " << endl;

    for (int i = 0; i < size; i++)
    {

        cout << setw(13) << e[i].emp_name;
        cout << setw(15) << e[i].emp_id;
        cout << setw(30) << e[i].emp_salary;
        cout << endl;
    }

    int id;
    cout << "Enter the id of the employee" << endl;
    cin >> id;

    for (int i = 0; i < size; i++)
    {

        if (id == e[i].emp_id)
        {
            cout << "The information of then respective employee is given below " << endl;
            cout << setw(13) << e[i].emp_name;
            cout << setw(15) << e[i].emp_id;
            cout << setw(30) << e[i].emp_salary;
            cout << endl;
        }
    }

    return 0;
}