// #include <iostream>
// #include <thread>

// using namespace std;
// void threadfn(int value)
// {
//     cout << "I am inside the thread function " << endl;
//     cout << "The value is " << value << endl;
// }
// void threadfn1(int value)
// {
//     cout << "I am inside the thread function 1 " << endl;
//     cout << "The localvalue in thread function  is " << value << endl;
// }
// int main()
// {
//     thread t1(threadfn, 5);
//     t1.join();

//     int localvalue = 500;
//     thread t2(threadfn1, localvalue);

//     t2.join();

//     return 0;
// }

// *******************************************************************************

// passing reference variable

// #include <iostream>
// #include <thread>

// using namespace std;
// void threadfn(int &value1, int value2)
// {
//     cout << "I am inside the thread function " << endl;
//     cout << "The value with reference  is " << value1 << endl;
//     cout << "The value of a is  " << value2 << endl;
// }

// int main()
// {
//     int localvalue = 500;
//     int a = 4120;
//     thread t1(threadfn, ref(localvalue), a);
//     t1.join();

//     return 0;
// }

// ********************************************************************************

// this can be one of the way to declare thread in the main function
#include <iostream>
#include <thread>

using namespace std;

int main()
{
    int localvalue = 500;
    int a = 4120;
    thread t1{
        // [](int &value)
        [&]()
        {
            // cout << "I am inside the thread function " << endl;
            cout << "I am inside the thread function " << endl;
            // cout << "The vlue is " << value << endl;
            cout << "The value  is " << localvalue << endl;
            cout << "The value  is " << a << endl;
            localvalue++;
            a++;
        },
    };

    t1.join();
    cout << "The value of local variable in the main function is  " << localvalue << endl;
    cout << "The value of a in the main function is  " << a << endl;
    return 0;
}