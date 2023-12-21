#include <iostream>
#include <cstring>
using namespace std;
class family
{
protected:
    string name;
    int members;

public:
    family(string s, int member)
    {
        name = s;
        members = member;
    }
    virtual void display() = 0;
    // virtual void display() = 0;
};

// creating derived class

class society : public family
{
    int totalfamily_size;

public:
    society(string s, int member, int fsize) : family(s, member)
    {

        totalfamily_size = fsize;
    }
    void display()
    {
        cout << "The name of the family is " << name << endl;
        cout << "The members in the family   is " << members << endl;
        cout << "The totall family size   in the society is  " << totalfamily_size << endl;
    }
};

// creating another derived class

class village : public family
{

    int totalsociety_size;

public:
    village(string s, int member, int society_num) : family(s, member)

    {

        totalsociety_size = society_num;
    }
    void display()
    {
        cout << "The name of the family is " << name << endl;
        cout << "The members in the family   is " << members << endl;
        cout << "The  totalsociety_size   in the village is  " << totalsociety_size << endl;
    }
};

int main()
{

    family *p[2];
    society s1("thakur", 4, 20);
    village v1("chaudhary ", 400, 10);
    p[0] = &s1;
    s1.display();
    cout << endl;
    p[1] = &v1;
    v1.display();

    return 0;
}