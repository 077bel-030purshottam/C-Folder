#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("pt1.txt");
    string s1;
    cout << "Enter your name " << endl;
    // cin >> s1;
    // out << s1 << endl; // this will print only one line in the txt file

    getline(cin, s1); // this will take many words as input and will print  all
    // inputed words into file
    out << s1 << endl;
    // out << "My name is " << s1 << endl; // This is also good way to arrange the given inputs
    return 0;
}