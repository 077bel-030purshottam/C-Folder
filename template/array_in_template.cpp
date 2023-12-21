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
        cout << "class : " << data1 << endl;
        cout << "Name is : " << data2 << endl;
    }
};

int main()
{
    int std_class = 10;
    string name[10];
    cout << "Enter the  anme of the student " << endl;

    for (int i = 0; i < 2; i++)
    {
        cin >> name[i];
    }

    for (int i = 0; i < 2; i++)
    {
        student<> s1(std_class, name[i]);
        s1.display();
    }
    return 0;
}