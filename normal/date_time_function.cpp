#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    // current date and time based on current system
    time_t now = time(0);

    // convert now to string
    char *dt = ctime(&now);
    cout << "The local date and time is " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time  is " << dt << endl;

    return 0;
}