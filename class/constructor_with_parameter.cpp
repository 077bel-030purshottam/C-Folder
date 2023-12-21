
#include <iostream>

using namespace std;
class line
{
private:
    int length;

public:
    void setdata(int l);
    int getdata();
    line(int len);
};


// this ia another way to declare the constructor 

line::line(int len) : length(len)
{
    cout << "The constructor is runnig" << endl;
}


// this ia another way to declare the constructor 
// line::line(int len)
// {

//     cout << "The constructor is created" << endl;
//     length = len;
// }
void line ::setdata(int l)
{
    length = l;
}
int line::getdata()
{
    return length;
}
int main()
{
    line line(5);
    cout << line.getdata() << endl;

    line.setdata(50); // upgrading the value of the length;
    cout << line.getdata() << endl;

    return 0;
}