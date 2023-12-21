#include <iostream>

using namespace std;
template <class T>
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // this is for the integer type data

    // vector v1(3);
    // vector v2(3);

    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;

    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;

    // int a = v1.dotproduct(v2);
    // cout << "The dot productr of v1 and v2 is " << a << endl;
    // *************************************************************************************************
    // this is for the floating  type data by using the template

    vector<float> v1(3);
    vector<float> v2(3);

    v1.arr[0] = 0.51;
    v1.arr[1] = 2.2;
    v1.arr[2] = 3.25;

    v2.arr[0] = 1.5;
    v2.arr[1] = 2.5;
    v2.arr[2] = 3.89;

    float a = v1.dotproduct(v2);
    cout << "The dot productr of v1 and v2 is " << a << endl;

    return 0;
}