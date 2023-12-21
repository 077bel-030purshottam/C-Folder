// write a program that get age as  input from the user
//  and display and check  who are
// able for voting  or not ?

#include <iostream>

using namespace std;

int main()
{
    int size;
    int age[10];
    cout << "Enter the size of the age" << endl;
    cin >> size;
    cout << "Enter the age of the people" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> age[i];
    }
    cout << " the age of the people" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << age[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (age[i] > 18)
        {
            cout << "They are ellgible for the voting with age " << age[i] << endl;
        }
        else
        {
            cout << "They are not ellgible for the voting with age " << age[i] << endl;
        }
    }
    return 0;
}