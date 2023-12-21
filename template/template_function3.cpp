#include <iostream>

using namespace std;
template <class T1, class T2>
float func_avg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float average;
    average = func_avg(5, 2);
    cout << "The average of thse number is ";
    cout << average << endl;

    return 0;
}