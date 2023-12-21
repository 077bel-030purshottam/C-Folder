#include <iostream>
#include <cstring>

using namespace std;
template <class T>
class pt
{
public:
    T data;
    pt(T a)
    {
        data = a;
    }
    void display();

    // void display()
    // {
    //     cout << "The value  of the data is " << data << endl;
    // }
};

template <class T>
void pt<T>::display()       // calling function outside of the class 
{
    cout << "The value  of the data is " << data << endl;
}

void print(int a)
{

    cout << " Tha value of the a is " << a << endl;
}

template <class T>
void print(T a)
{

    cout << " Tha value of the a is " << a << endl;
}

template <class T>
void print1(T a1)
{

    cout << " Tha value of the a1 is " << a1 << endl;
}
int main()
{
    // template class function calling
    pt<string> file1("purshottam");
    file1.display();

    // outside function calling
    print(5); // exact matches takes highest priority
    print1(10);

    return 0;
}