#include <iostream>

using namespace std;

int main()
{

    const char *c[5] = {"purshottam", "Rohit", "Rohan", "manoj", "manish"};
    for (int i = 0; i < 5; i++)
    {
        cout << " " << c[i];  // this will print all the name listed above
        cout << " " << c + 1; // this will print the address of the all name present in  the above string
        cout << endl;
    }

    return 0;
}