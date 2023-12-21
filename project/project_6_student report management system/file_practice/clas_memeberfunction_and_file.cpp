#include <iostream>
#include <fstream>

using namespace std;
class myclass
{
public:
    string name;
    void myfile();
};

void myclass::myfile()
{
    myclass s1;
    ofstream file1;
    char data[20];

    file1.open("myfile.txt");
    cout << "Enter your name " << endl;
    cin.getline(data, 20);

    file1 << data << endl;
    file1.close();
}
int main()
{
    myclass obj;
    obj.myfile();
    return 0;
}