

// C++ Program to show Example of Static member
// variable of template class
#include <iostream>

using namespace std;
template <class T>
class static_member
{
public:
    T arr[10];
    static T count;

    void getnum()
    {
        cout << "Enter the element of the array " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            count++;
        }
    }
    void counting()
    {
        cout << "The total element in array is " << count << endl;
    }
};
template <class T>
T static_member<T>::count = 100;
int main()
{
    static_member<int> s1;
    s1.getnum();

    s1.counting();

    return 0;
}