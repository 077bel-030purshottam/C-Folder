#include <iostream>
#include <thread>

using namespace std;
void threadfn(int value)
{

    cout << "i am inside the thread function" << endl;
    cout << "The value is " << value << endl;
}
void threadfn1(int value1)
{

    cout << "i am inside the thread function 1 " << endl;
    cout << "The localvalue is " << value1 << endl;
}
int main()
{
    thread t1{threadfn, 100};
    t1.join();

    // passing local variable to the thread function
    int localvalue = 200;
    thread t2{threadfn1, localvalue};
    t2.join();
    return 0;
}