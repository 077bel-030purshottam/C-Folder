#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << i << " ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
        i++;
    } while (i <= 50);

    return 0;
}