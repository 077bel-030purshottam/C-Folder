#include <iostream>

using namespace std;
template <typename T>
T sum(T a, T b)
{
    return a + b;
}
int main()
{
    int x = 10;
    int y = 50;
    float a = 50.25;
    float b = 80.25;
    int result = sum(x, y);
    cout << "The sum of the integer type data is " << result << endl;
    float result1 = sum(a, b);
    cout << "The sum of the floating  type data is " << result1 << endl;

    return 0;
}