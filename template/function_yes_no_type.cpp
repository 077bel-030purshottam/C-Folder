#include <iostream>

using namespace std;

void display()
{
    int size = 4;
    string name[10];
    string cond1;
    string cond2;
    cout << "Enter the name of the people " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "do you want to write  the  name of more student " << endl;
        cin >> cond1;
        if (cond1 == "yes")
        {
            cout << "name of student is :" << endl;
            cin >> name[i];
        }
        else if (cond1 == "no")
        {
            cout << " NO more name of student is needed" << endl;
            break;
        }
    }
}
int main()
{
    display();
    return 0;
}