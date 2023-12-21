#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void file_function()
{
    char data[100];
    int marks[10];
    string str;
    ofstream outfile;
    outfile.open("sample30.txt");
    cout << "Enter your name " << endl;
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter the array element " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    outfile << " the array element " << endl;
    for (int i = 0; i < 5; i++)
    {
        outfile << marks[i] << " ";
    }
    outfile.close();

    ifstream infile;
    infile.open("sample30.txt");
    if (infile.is_open())// cheking whether file is opened 
    {
        string str;
    }
    while (getline(infile, str))
    {
        cout << str << endl;
    }

    // **********************************************************************
    // infile >> data;
    // cout << "The text written in the file is " << endl;
    // cout << data << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     infile >> marks[i];
    // }
    // outfile << " the array element are  " << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << marks[i];
    // }
    //  *************************************************************************************

    infile.close();
}
int main()
{
    file_function();

    return 0;
}