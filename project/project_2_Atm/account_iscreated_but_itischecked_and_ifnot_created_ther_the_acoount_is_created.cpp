#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class intro_duction
{
public:
    int option;
    string name = "purshottam";
    int id = 100;
    string password = "ram123";
    int res;
    char str1[10];
    string login_password;
    int login_id;
    void loginfunction()
    {
        for (int i = 0; i < 1; i++)
        {

            cout << "plz enter the id and password to login" << endl;
            cout << " Enter the id " << endl;
            cin >> login_id;
            cout << " Enter the password " << endl;
            cin >> login_password;
            if (login_password == password && login_id == id)
            {
                cout << "Congratulation your login was successdul " << endl;
                cout << " you information is " << endl;
                cout << "name" << setw(13) << "id" << setw(13) << "password" << endl;
                cout << name << setw(13) << id << setw(13) << password << endl;
                break;
            }
            else
            {

                cout << "*******************   login failed  *************************" << endl;
                cout << "it seems that your account is not created " << endl;
                cout << "So plz create it first " << endl;
            }
        }
    }
};

void display_show_option()
{
    cout << "1->withdraw_money " << endl;
    cout << "2->deposit_money  " << endl;
    cout << "3->request_money  " << endl;
    cout << "4->quit_program   " << endl;
}
void introduction()
{
    cout << "\n Welcome to mybank !" << endl;

    cout << "1->login into your account  " << endl
         << "2-> create a account " << endl
         << "3->reset password " << endl;
}
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
class creat_account : public intro_duction
{
public:
    void creataccount()
    {
        cout << "plz creat a new account " << endl;
        cout << "Enter your id " << endl;
        cin >> id;
        cout << "Enter your password " << endl;
        cin >> password;
        cout << "Enter your name " << endl;
        cin >> name;
        cout << "congratulation your account is created " << endl;
        cout << " you information is " << endl;
        cout << "name" << setw(13) << "id" << setw(13) << "password" << endl;
        cout << name << setw(13) << id << setw(13) << password << endl;
    }
};
int main()
{
    introduction();
    intro_duction b1;
    cout << endl;
    b1.loginfunction();
    cout << endl;

    if (b1.password == b1.login_password)
    {
        display_show_option();

        cout << "\n"
             << endl;

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
        default:
            cout << "invalid input " << endl;
        }
    }

    if (b1.password != b1.login_password)
    {
        creat_account c1;
        c1.creataccount();
        introduction();
        cout << endl;
        display_show_option();

        cout << "\n"
             << endl;

        cout << "Which operation you want to perform ?" << endl;
        int choice1;
        cout << "Enter the option" << endl;
        cin >> choice1;
        switch (choice1)
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
        default:
            cout << "invalid input " << endl;
        }
    }
    return 0;
}