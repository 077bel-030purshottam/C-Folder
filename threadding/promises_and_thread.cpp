#include <iostream>
#include <thread>
#include <future>

using namespace std;
void threadfn(promise<int> &prom)
{
    prom.set_value(520);
    this_thread::sleep_for(chrono::seconds(2));
}
int main()
{
    promise<int> mypromise;
    future<int> fut = mypromise.get_future();
    cout << "Main******...." << endl;
    thread t1(threadfn, ref(mypromise));
    cout << "Main thread " << fut.get() << endl;
    t1.join();

    return 0;
}