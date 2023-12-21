#include <iostream>

using namespace std;
class simple_interest
{
    int principle;
    int time;
    int rate;

public:
    simple_interest(int p = 1000, int t = 1, int r = 4)
    {
        principle = p;
        time = t;
        rate = r;
    }
    void display()
    {
        cout << "The simple interest is "
             << (principle * time * rate) / 100 << endl;
    }
};
int main()
{
    simple_interest s1;
    s1.display();

    return 0;
}