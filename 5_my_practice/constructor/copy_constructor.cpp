#include <iostream>

using namespace std;
class pulchowk
{
    string depart_name;

public:
    pulchowk()
    {
        cout << "Default constructer called " << endl;
        depart_name = "Electrical";
    }
    pulchowk(pulchowk &p)
    {
        cout << "copy  constructer called " << endl;
        depart_name = p.depart_name;
    }
    void display()
    {

        cout << "The name of the department is " << depart_name << endl;
    }
};
int main()
{
    pulchowk p1;
    p1.display();
    pulchowk p2(p1);
    p2.display();

    return 0;
}