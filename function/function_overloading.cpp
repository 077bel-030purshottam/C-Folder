
// function overloading 
#include <iostream>

using namespace std;
void print(int num)
{
    cout << "The num is " << num << endl;
}
void print(string name)
{
    cout << "My  name  is " << name << endl;
}
int main()
{

    print(5);
    print("purshottam");
    return 0;
}