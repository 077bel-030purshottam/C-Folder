#include <iostream>
#include <thread>

using namespace std;

int main()
{
    int localvalue = 500;
    int value2 = 625;

    // this can be one method to use thread
    // thread t1{
    //     [](int &value)
    //     {
    //         cout << "I am inside the thread function" << endl;
    //         cout << "value=" << value++ << endl;
    //     },
    //     ref(localvalue)};

    // t1.join();

    // ******************************************************************************************************************

    // another method to use this thread is
    // thread t1{
    //     [&]()                        // the use of the (&) helps to access the all menber of the main function
    //     {
    //         cout << "I am inside the thread function" << endl;
    //         cout << "value=" << localvalue++ << endl;
    //         value2++;
    //     }

    // };
    // t1.join();
    // cout << "THe value in main function is " << localvalue << endl;
    // cout << "THe value in main function of value2  is " << value2 << endl;

    // **************************************************************************************************************************
    // another way to access the value of the main function

    thread t1{
        [=]() // if we use (=) as lamda function then we can use increament or decreament
        {
            cout << "I am inside the thread function" << endl;
            cout << "value=" << localvalue << endl;
        }

    };
    t1.join();
    cout << "THe value in main function is " << localvalue << endl;
    cout << "THe value in main function of value2  is " << value2 << endl;

    return 0;
}