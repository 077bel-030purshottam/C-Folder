#include <iostream>

using namespace std;
template <class t1 = int, class t2 = string>
class student
{
public:
    t1 data1;
    t2 data2;
    student(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl;
        cout << data2 << endl;
    }
};

int main()
{
    int std_class = 10;
    string name = "purshottam";
    student<> s1(std_class, name);
    s1.display();
    return 0;
}