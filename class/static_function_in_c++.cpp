#include <iostream>

using namespace std;
class mobile
{
    int company;

public:
    static int company_count;
    mobile(int price) // constructor
    {
        cout << "constructor called" << endl;
        company = price;
        company_count++;
    }
    static int company_num()
    {
        return company_count;
    }
};

int mobile::company_count = 0;
int main()
{

    cout << "total objects created before creating any objects  are " << mobile::company_count << endl;

    mobile num_com1(5);
    mobile num_com2(6);

    // number of objects after creating objects
    cout << "total objects created are " << mobile::company_count << endl;

    return 0;
}