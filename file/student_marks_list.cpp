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

    outfile << "THe marks of the student are listed below " << endl;
    outfile << setw(15) << "serial number" << setw(25) << " students marks  " << endl;

    for (int i = 0; i < 5; i++)
    {
        outfile << setw(5) << i + 1 << setw(22) << marks[i] << endl;
    }

    // ***********************************************************************************

    ifstream infile;

    infile.open("pt2.txt");
    string s;
    while (infile.eof() == 0)
    {
        getline(infile, s);
        cout << s << endl;
    }

    return 0;
}