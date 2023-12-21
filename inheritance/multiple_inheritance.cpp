#include <iostream>

using namespace std;
class exgf1
{
private:
    int mo_num;

protected:
    int height;

public:
    string name;

    void setname(string str)
    {
        name = str;
    }
    void set_num(int num, int h)
    {
        mo_num = num;
        height = h;
    }
    void display()
    {
        cout << "THe number of the ex_girlfriend is " << mo_num << endl;
        cout << "THe name  of the ex_girlfriend is " << name << endl;
    }
};

class exgf2
{
private:
    int money_given = 2000;

public:
    void setmoney(int mo)
    {
        money_given = mo;
    }

    void display1()
    {
        cout << "The money given to the exgf2 is " << money_given << endl;
    }
};

class gf : public exgf1, public exgf2
{
public:
    void display2()
    {
        cout << "The height of the exgf1 is " << height << " fit " << endl;
    }
};

int main()
{

    gf x1;
    x1.set_num(98032, 5);
    x1.setname("gita");
    x1.display();
    x1.display1();
    x1.display2();

    return 0;
}