#include <iostream>
#include <thread>

using namespace std;
void threadfn(int &value, int v2)
{
    cout << "I am inside the thread function " << endl;
    cout << "The value is " << value++ << endl;
    cout << "The value is " << v2 << endl;
}
int main()
{
    int localvalue = 500;
    int value2 = 250;

    thread t1{threadfn, ref(localvalue), value2};
    t1.join();
    cout << "The value on the main function is " << localvalue << endl;
    return 0;
}