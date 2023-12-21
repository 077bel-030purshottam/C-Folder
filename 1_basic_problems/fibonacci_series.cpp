// C++ Program to find Fibonacci Series
// Fibonacci Series is in the form of 0, 1, 1, 2, 3, 5, 8, 13, 21,……
//  To find this series we add two previous
//   terms/digits and get next term/number.

#include <iostream>

using namespace std;

int main()
{

    int num, next;
    int first = 0;
    int second = 1;
    cout << "how many   number you want to display  " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

// demonstration of the program
// when i=0
// fisrt =0,next=1,first=1,second =1

// when i=1
// first =1,next =2,first =1,second =2

// when i=2
// first =1,next =3,first =2,second =3

// when i=3
// first =3,next =5,first =3,second =5
