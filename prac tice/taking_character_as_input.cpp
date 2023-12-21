#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    char a[20], b[20];
    cout << "Enter the a " << endl;
    cin.get(a, 20, '\n');
    cout << a << endl;
    cin.ignore();

    cout << "Enter the b " << endl;
    cin.get(b, 20);
    cout << b << endl;

    return 0;
}