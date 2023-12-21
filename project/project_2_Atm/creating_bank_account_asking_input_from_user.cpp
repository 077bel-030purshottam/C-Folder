#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class intro_duction
{
public:
    int option;
    string name;
    int id;
    string password;
    int res;
    char str1[10];
    void introduction()
    {
        cout << "\n Welcome to mybank !" << endl;

        cout << "1->create a account " << endl
             << "2->login" << endl
             << "3->reset password " << endl;
    }
    void creat_account()
    {

        cout << "Enter the option " << endl;
        cin >> option;
        if (option == 1)
        {
            cout << "Enter the name: " << endl;
            cin >> name;
            cout << "Enter the id: " << endl;
            cin >> id;
            cout << "Create  the password: " << endl;
            cin >> password;

            cout << "Congratulation your  account is created " << endl;
            cout << " you information is " << endl;
            cout << "name" << setw(13) << "id" << setw(13) << "password" << endl;
            cout << name << setw(13) << id << setw(13) << password << endl;
        }
        cout << "do you want to login "
             << "yes or no " << endl;
        cin >> str1;
        if (res = strcmp(str1, "yes") == 0)
        {

            string login_password; //= password;
            int login_id;          //= id;
            cout << "plz enter the id and password to login" << endl;
            cout << " Enter the id " << endl;
            cin >> login_id;
            cout << " Enter the password " << endl;
            cin >> login_password;
            if (login_id == id && login_password == password)
            {
                cout << "login success :" << endl;
            }
        }
    }
};

class after_login : public intro_duction
{
public:
    void display_afterlogin()
    {

        cout << "Congratulation your login was successdul " << endl;
        cout << " you information is " << endl;
        cout << "name" << setw(13) << "id" << setw(13) << "password" << endl;
        cout << name << setw(13) << id << setw(13) << password << endl;
    }
};

class showing_option : public after_login
{
public:
    int withdraw_money;
    int deposit_money;
    int request_money;
    int quit_program;
    void display_show_option()
    {
        // 1)Withdraw money.
        // 2)Deposit money.
        // 3)Request balance.
        // 4)Quit the program.

        cout << "1->withdraw_money " << endl;
        cout << "2->deposit_money  " << endl;
        cout << "3->request_money  " << endl;
        cout << "4->quit_program   " << endl;
    }
};
void withdraw()
{
    int money;
    cout << "how much money you want to draw " << endl;
    cin >> money;
    cout << " you account is debited by " << money << endl;
}
void deposit()
{
    int money;
    cout << "how much money you want to deposit ?" << endl;
    cin >> money;
    cout << " you account is credited  by " << money << endl;
}
void request()
{
    int money;
    cout << "how much money you want to request  ?" << endl;
    cin >> money;
    cout << " you requested   " << money << " money" << endl;
}
void quit_program()
{
    cout << "you have quit the program" << endl;
}

int main()
{
    intro_duction b1;
    b1.introduction();
    b1.creat_account();
    cout << "\n"
         << endl;
    showing_option s1;
    s1.display_show_option();
    cout << "Which operation you want to perform ?" << endl;
    int choice;
    cout << "Enter the option" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        withdraw();
        break;
    case 2:
        deposit();
        break;
    case 3:
        request();
        break;
    case 4:
        quit_program();
        break;
    defaul:
        cout << "invalid input " << endl;
    }
    return 0;
}