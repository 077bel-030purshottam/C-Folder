#include <iostream>
#include <cstring >

using namespace std;
typedef struct zone
{
    char village[20];
    char district[20];
} z1;
int main()
{
    z1 z;
    strcpy(z.district, "sarlahi");
    strcpy(z.village, "haripur ");

    cout << "district name is " << z.district << endl;
    cout << "village  name is " << z.village << endl;

    return 0;
}