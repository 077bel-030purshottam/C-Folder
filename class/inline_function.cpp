#include <iostream>

using namespace std;
inline int maxi_num(long long int x, long long int y)
// int maxi_num(long long int x, long long int y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << "THe maximum number between 10,20 is "
         << maxi_num(10, 20) << endl;
    cout << "THe maximum number between 100000,20000 is "
         << maxi_num(100000, 20000) << endl;
    cout << "THe maximum number between 8562,6979296451 is "
         << maxi_num(8562, 6979296451) << endl;
    return 0;
}