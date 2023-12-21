#include <iostream>

using namespace std;
// function by the help of the normal array 

// int avg(int a[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += a[i];
//     }
//     int avgvalue = sum / size;
//     return avgvalue;
// }




// function by the help of the pointer 
int avg(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(a+i);
    }
    int avgvalue = sum / size;
    return avgvalue;
}
int main()
{
    int x[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int total_avg = avg(x, size);
    cout << total_avg << endl;
    return 0;
}