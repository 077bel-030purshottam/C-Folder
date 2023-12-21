#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    //  creatinf a new file  and writing a text to the file
    char data[50];
    string s1 = "heloow i am purshottam";
    string s2 = "heloow i am Rohit ";
    string s4;
    string s5;
    string s6;
    string s3;
    ofstream outfile;
    outfile.open("pt.txt");
    cout << "Enter your family name " << endl;
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your salary  " << endl;
    cin >> data;
    cin.ignore();
    outfile << data << endl;

    outfile << s1 << endl;
    outfile << s2 << endl;

    // *****************************************************************

    // openeig a file and reading  text from the file

    ifstream infile;
    infile.open("pt.txt");



// displaying individually the single string 
    // infile >> s3;
    // cout << s3;

    // infile >> s4;
    // cout << s4;

    // infile >> s5;
    // cout << s5;

    cout << "displaying by the use of the loop " << endl;
    while (infile.eof() == 0)
    {
        getline(infile, s6);
        cout << s6 << endl;
    }
    infile.close();
    return 0;
}