#include <iostream>

using namespace std;
class bank
{
    int account;

public:
    void getaccount()
    {
        cout << "Enter the money of account" << endl;
        cin >> account;
    }
    void displayaccount()
    {
        cout << "The money in account is " << account << endl;
    }
};

class save : public bank
{
    int save_money;

public:
    void getsave()
    {
        cout << "Enter the saving money" << endl;
        cin >> save_money;
    }
    void displaysave()
    {
        cout << "The saving money in account is " << save_money << endl;
    }
};
class current : public bank
{
    int current_money;

public:
    void getcurrent()
    {
        cout << "Enter the current money " << endl;
        cin >> current_money;
    }
    void displaycurrent()
    {
        cout << "The current money is " << current_money << endl;
    }
};
int main()
{
    save s1;
    s1.getaccount();
    s1.getsave();
    s1.displayaccount();
    s1.displaysave();

    current c1;
    c1.getcurrent();
    c1.displaycurrent();
    return 0;
}