#include <iostream>

using namespace std;
template <typename T>
T maxi(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    // we can use any data type if we use any template
    int x = 10;
    int y = 50;
    int largest = maxi(x, y);
    cout << largest << endl;

    float a = 10.25;
    float b = 5.5;
    float largest1 = maxi(a, b);
    cout << largest1 << endl;

    string s1 = "hellow i am purshottam thakur";
    string s2 = " purshottam thakur";
    string largest2 = maxi(s1, s2);
    cout << largest2 << endl;

    return 0;
}