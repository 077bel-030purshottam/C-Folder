#include <iostream>
#include <thread>

using namespace std;
void threadfn()
{
    cout << " i am in the thread function " << endl;
    cout << this_thread::get_id() << endl;
}
int main()
{
    thread t1{threadfn};
    cout << this_thread::get_id() << endl;

    t1.join();
    return 0;
}