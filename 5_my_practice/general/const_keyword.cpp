#include <iostream>

using namespace std;
void display(const int num[], int limit)
{
    cout << "The number are " << endl;
    for (int counter = 0; counter < limit; counter++)
    {
        cout << num[counter] << " ";
    }
}
int main()
{
    // const float pi = 3.1415;
    // cout << "THe value f pi is " << pi << endl;

    // for the const array we can do this
    int number[] = {10, 20, 30, 40, 50};
    display(number, 5);
    return 0;
}