// promises  are the  container of the future

#include <iostream>
#include <thread>
#include <future>

using namespace std;

int main()
{

    promise<int> mypromise;
    future<int> fut = mypromise.get_future();
    mypromise.set_value(100);
    cout << fut.get() << endl;
    return 0;
}