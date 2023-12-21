#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number from  1 to 3 to chose the language of your choice" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Selected language is English" << endl;
        break;
    case 2:
        cout << "Selected language is Nepali" << endl;
        break;
    case 3:
        cout << "Selected language is maithili " << endl;
        break;

    default:    
        cout << "Invalid number" << endl;
    }
    return 0;
}