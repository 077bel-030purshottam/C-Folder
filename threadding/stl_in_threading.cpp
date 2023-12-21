#include <iostream>
#include <thread>
#include <initializer_list>
#include <vector>
using namespace std;
template <typename T>
void threadfn()
{
    cout << "I am inside the thread function " << endl;
    // cout << "type is " << typeid(T).name() << endl;
    // cout << "type is " << typeid(T).name() << endl;
}
void threadfn1(initializer_list<int> lst)
{

    cout << "The size is " << lst.size() << endl;
}
void threadfn2(vector<int> lst)
{

    cout << "The size is " << lst.size() << endl;
}
int main()
{
    thread t1(threadfn<int>); // for the tem[template function
    t1.join();
    // thread t2(threadfn<float>);
    // t2.join();

    initializer_list<int> l1 = {10, 20, 30, 40, 50}; // for the stl
    thread t3(threadfn1, l1);
    t3.join();

    vector<int> l2 = {10, 20, 30, 40, 50, 58, 90}; //  fro the vector
    thread t4(threadfn2, l2);
    t4.join();

    return 0;
}