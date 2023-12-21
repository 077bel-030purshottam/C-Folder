#include <iostream>
#include <fstream>
#include <iomanip >

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("pt2.txt");
    int marks[5];
    cout << "Enter the marks of the student " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    outfile << setw(15) << "serial number" << setw(25) << " students marks  " << endl;

    for (int i = 0; i < 5; i++)
    {
        outfile << setw(10) << i << setw(18) << marks[i] << endl;
    }

    return 0;
}