// this is the way how the thread is drfined in the c++

// #include <iostream>
// #include <thread>

// using namespace std;
// void threadfn()
// {
//     cout << "I am inside the main function " << endl;
// }
// int main()
// {
//     thread t1{threadfn};
//     t1.join();

//     return 0;
// }
// ***********************************************************************

// this is the code of the future
#include <iostream>
#include <thread>
#include <future>

using namespace std;
void asyncfunc()
{
    cout << "Async  thread " << this_thread::get_id() << endl;

    cout << "I am inside the async function " << endl;
}
int main()
{
    cout << "Main thread " << this_thread::get_id() << endl;
    // future<void> fn = async(launch::async, asyncfunc);// thread id is different

    future<void> fn = async(launch::deferred, asyncfunc); // thread id is same

    fn.get();
    return 0;
}