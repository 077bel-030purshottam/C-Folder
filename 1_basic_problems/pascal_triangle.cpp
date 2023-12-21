// Pascal’s triangle is a triangular array of the binomial coefficients.
//  Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle.
//  Following are the first 6 rows of Pascal’s Triangle.

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << j << " ";
        }
    }

    return 0;
}