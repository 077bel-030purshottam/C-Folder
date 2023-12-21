#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    string name;
    string sirname;
    string gmail;
    cout << "Enter  the name" << endl;
    getline(cin, name);

    cout << "Enter  the sirname" << endl;
    getline(cin, sirname);

    cout << "Enter  the gmail" << endl;
    getline(cin, gmail);

    cout << setw(7) << " NAME" << setw(13) << "SIRNAME" << setw(13) << "gmail" << endl;
    cout << setw(7) << name << setw(13) << sirname << setw(20) << gmail << endl;

    return 0;
}