#include <iostream>
#include <thread>

using namespace std;
void threadfn()
{
    cout << "i am inside the thread function " << endl;
}

int main()
{
    thread t1{threadfn};        // the curly braces can be also used 
    // thread t1(threadfn);
    t1.join();
    return 0;
}