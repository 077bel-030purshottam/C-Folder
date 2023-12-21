// #include <iostream>

// using namespace std;

// // # define constant
// #define length 50
// #define breadth 60
// #define height 40
// #define newline '\n'

// int main()
// {
//     /*
// there are 2 types of the constants
// 1---> #define processor
// 2--->using const keyword
// */
//     // for example

//     int area;
//     area = length * breadth;
//     cout << newline << endl;

//     cout << area << endl;
//     cout << newline << endl;

//     return 0;
// }

// The example of the  using const in c++

#include <iostream>

using namespace std;

int main()
{
    // float length = 800; // thi will not work because const int lenght is already define

    const int length = 50;
    const int breadth = 50;
    const int height = 50;
    const char newline = '\n';

    int area = length * breadth;
    cout << newline;

    cout << area << endl;
    cout << newline;
    // cout << length; // will produce error

    return 0;
}
