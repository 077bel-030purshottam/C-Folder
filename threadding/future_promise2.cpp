#include <iostream>
#include <thread>
#include <future>

using namespace std;
int asyncfunc(int value)
{
    cout << "Async  thread " << this_thread::get_id() << endl;

    cout << "I am inside the async function " << endl;
    return value + 100;
}
int main()
{
    cout << "Main thread " << this_thread::get_id() << endl;
    future<int> fn = async(launch::async, asyncfunc, 200); // thread id is different

    // future<int> fn = async(launch::deferred, asyncfunc); // thread id is same

    // cout << fn.get() << endl;
    if (fn.valid())
    {
        cout << fn.get() << endl;
    }
    if (fn.valid())
    {
        fn.get();
    }
    else
    {
        cout << "invalid" << endl;
    }
    return 0;
}