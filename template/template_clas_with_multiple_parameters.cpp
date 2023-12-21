
#include <iostream>

using namespace std;
template <class t1, class t2>
class myclass
{
    t1 data1;
    t2 data2;

public:
    void setdata(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {

        cout << this->data1 << endl
             << this->data2 << endl;
    }
};
int main()
{
    myclass<int, char> s1;
    s1.setdata(20, 'p');
    s1.display();
    myclass<int, float> s2;
    s2.setdata(500, 3.5);
    s2.display();

    

    return 0;
}