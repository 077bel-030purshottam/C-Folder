#include <iostream>
#include <cstring >

using namespace std;


// main base class 
class dad
{
protected:
    string name;
};


// derived class 
class son : dad
{
public:
    void setdata(string str)
    {
        name = str;
    }
    void getdata()
    {
        cout << name;
    }
};
int main()
{

    son s;
    s.setdata("purshottam");
    s.getdata();
    return 0;
}