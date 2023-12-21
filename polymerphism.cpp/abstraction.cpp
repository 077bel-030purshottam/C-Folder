#include <iostream>

using namespace std;
class addnum
{

private:
    int num;

public:
    // constructor
    addnum(int x = 0)
    {
        num = x;
    }

    // interface to the outside world
    void total(int number)
    {

        num += number;
    }
    // int display()
    // {
    //     return num;
    // }

    // interface to the outside world

    void display()
    {
        cout << "The totam sum of the numer are " << num << endl;
    }
};
int main()
{
    addnum s;
    s.total(10);
    s.total(10);
    s.total(10);
    // cout << s.display();
    s.display();

    return 0;
}