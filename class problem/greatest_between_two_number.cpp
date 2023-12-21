
// C++ program to find greatest b/w 3 nos.
//  by defining the functions inside class

#include <iostream>

using namespace std;
class greatest_num
{
private:
    int n1, n2, n3;

public:
    void get_num()
    {
        cout << "Enter the value of the  n1,n2 and n3" << endl;
        cin >> n1 >> n2 >> n3;
    }
    void greatest()
    {

        int largest = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
        cout << "the largest number is " << largest << endl;
        // 10 20   30
        // 30,20,10
    }
};
int main()
{
    greatest_num g1;
    g1.get_num();
    g1.greatest();
    return 0;
}