#include <iostream>
#include <cstring >
#include <iomanip>

using namespace std;
struct school
{
    string school_name;
    string school_address;
    int school_code;
};

void printfschool(struct school *s)
{
    cout << " school name " << setw(60)
         << " school address " << setw(20)
         << " School code " << setw(40) << endl;

    cout << setw(40) << s->school_name;
    cout << setw(30) << s->school_address;
    cout << setw(20) << s->school_code;
}

int main()
{
    struct school s1;

    s1.school_address = "kathamandu";
    s1.school_name = " lord bright wisdom international school ";
    s1.school_code = 456;
    printfschool(&s1);
    return 0;
}