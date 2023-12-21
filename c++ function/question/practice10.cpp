#include <iostream>
using namespace std;
int main()
{
    int sea, c, n = 6;
    int array[10];
    cout << "Enter the array element " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the key element " << endl;
    cin >> sea;
    for (c = 0; c < n; c++)
    {
        if (array[c] == sea)
        {
            printf("%d is present at location %d.\n", sea, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", sea);
    return 0;
}