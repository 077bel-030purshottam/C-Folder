#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    char s1[50] = "Purshottam";
    char s2[50] = "purshottam";
    int res = strcmp(s1, s2);
    cout << "The result after comparision is " << res << endl;

    return 0;
}