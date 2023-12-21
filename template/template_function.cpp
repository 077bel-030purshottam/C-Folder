#include <iostream>
#include <string >

using namespace std;
template <typename T>
inline T const &maxi(T const &a, T const &b)
{
    return a > b ? a : b;
}

int main()
{
    int x = 40;
    int y = 50;
    cout << "The maximum number between these two are " << maxi(x, y) << endl;

    float A = 40.0235;
    float B = 50.23;
    cout << "The maximum number between these two are " << maxi(A, B) << endl;

    string s1 = "purshottam";
    string s2 = "purshottam is my name";
    cout << "The maximum number between these two are " << maxi(s1, s2) << endl;

    return 0;
}