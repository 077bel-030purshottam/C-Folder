#include <iostream>
#include <ctime>

using namespace std;
void getsSeconds(unsigned long *p)
// void getsSeconds(unsigned int  *p)  // this c an also be used
{
    // get the current numbe rof seconds

    *p = time(NULL);
    return;
}
int main()
{
    unsigned long sec;
    // unsigned int  sec;           // this c an also be used
    getsSeconds(&sec);

    // print the actual value
    cout << "Number of seconds  " << sec << endl;

    return 0;
}