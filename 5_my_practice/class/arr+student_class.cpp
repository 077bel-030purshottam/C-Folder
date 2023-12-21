#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class student
{
public:
    string name;
    int id;
    void display()
    {

        cout << name << setw(13) << id << setw(13) << endl;
    }
};
int main()
{
    student s1[10];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter the name of the student " << endl;
        getline(cin, s1[i].name);
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter the id of the student " << endl;
        cin >> s1[i].id;
    }
    cout << setw(13) << "Name" << setw(13) << "id" << setw(13) << endl;
    for (int i = 0; i < 2; i++)
    {
        s1[i].display();
    }

    return 0;
}