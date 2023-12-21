#include <iostream>

using namespace std;
#define pi 3.1415
#define inline max(a, b)((a > b) ? a : b)
int main()
{

    cout << "The value of the pi is " << pi << endl;
    int large = max(20, 30);
    cout << "large " << large << endl;

    int large1 = max(20, 10);
    cout << "large " << large1 << endl;

    int large2 = max(20, 200);
    cout << "large " << large2 << endl;

    float large3 = max(2.6, 2.5);
    cout << "large " << large3 << endl;
    return 0;
}