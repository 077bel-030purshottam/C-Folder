#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // creating a file  in   write mode and writinhg something to it

    char data[100];
    ofstream fileopen;
    fileopen.open("afile.dat");
    cout << "writing to the file " << endl;
    cout << "Enter your name " << endl;
    cin.getline(data, 100);
    fileopen << data << endl;
    cout << "Enter your age " << endl;
    cin >> data;
    cin.ignore();
    fileopen << data << endl;
    fileopen.close();

    // The above code was to open a file and write something to it

    // opening a file and reading a text from it

    ifstream infile;
    infile.open("afile.dat");

    // in order to readx from the file we need to use

    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;
    infile.close();
    return 0;
}