#include <iostream>

using namespace std;
class college
{
    string collegename;
    string head_department;
    int collegeid;
    int no_course;

public:
    void getdetail()
    {
        cout << "Enter the name of the college  " << endl;
        getline(cin, collegename);
        cout << "Enter the name of the head_department  " << endl;
        getline(cin, head_department);
        cout << "Enter the collegeid of the college " << endl;
        cin >> collegeid;
        cout << "Enter the number of course offered by  the college " << endl;
        cin >> collegeid;
    }
    void displaydetail()
    {
        cout << "the name of the college is  " << endl;
        cout << collegename << endl;
        cout << "the name of the head_department is  " << endl;
        cout << head_department << endl;
        cout << " the collegeid of the college is " << endl;
        cout << collegeid << endl;
        cout << "the number of course offered by  the college is  " << endl;
        cout << collegeid << endl;
    }
};
int main()
{
    college c1;
    c1.getdetail();
    c1.displaydetail();
    return 0;
}