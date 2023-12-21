#include <iostream>

using namespace std;

int main()
{
    double *pvalue = NULL; // initialization of pointer with null
    pvalue = new double;   // request variable for memory
    *pvalue = 236.25;      // store value at allocated address
    cout << "The value is " << *pvalue << endl;
    delete pvalue; // free up memory
    return 0;
}