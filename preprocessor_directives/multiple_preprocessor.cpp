#include <iostream>

using namespace std;
#define DEBUG
#define min(a, b) (((a) < (b)) ? a : b)
int main()
{
    int i = 50;
    int j = 20;

#ifdef DEBUG
    cerr << "going Inside main function " << endl;
#endif

#if 0
cout<<MKSTR(HELLOW C++)<<endl;
#endif
    cout << "The minimum is " << min(i, j);
    cout << endl;

#ifdef DEBUG
    cerr << "coming out of the function " << endl;
#endif
    return 0;
}