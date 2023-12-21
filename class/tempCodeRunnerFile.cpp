#include <iostream>

using namespace std;
class Exgirlfriend
{
    long int mo_num;

public:
    void setmo_num(long int number)
    {
        mo_num = number;
    }
    int gettmo_num()
    {
        return mo_num;
    }
    friend void printfnum(Exgirlfriend num);
};

void printfnum(Exgirlfriend num)
{
    cout << "The Exgirlfreind number is " << num.gettmo_num() << endl;
}
int main()
{
    Exgirlfriend num;
    num.setmo_num(9803288790);
    printfnum(num);
    return 0;
}