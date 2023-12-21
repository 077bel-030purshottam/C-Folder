#include <iostream>

using namespace std;
class Exgirlfriend
{
    long long int mo_num;

public:
    void setmo_num(long long int number)
    {
        mo_num = number;
    }
    int gettmo_num()
    {
        return mo_num;
    }
    friend void printfnum(Exgirlfriend num);
};

void printfnum(Exgirlfriend num) // this is friend  function which can access the private memebers
// of the class
{
    cout << "The Exgirlfreind number is " << num.gettmo_num() << endl;
}
int main()
{
    Exgirlfriend num1;
    num1.setmo_num(980328879);
    printfnum(num1);
    return 0;
}