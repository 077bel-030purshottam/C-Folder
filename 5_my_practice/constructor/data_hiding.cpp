#include <iostream>
#include <cstring>

using namespace std;
class yogesh
{
    string exgirlfriend;

public:
    void display()
    {
        cout << "Enter the name of the exgirlfriend of yogesh " << endl;
        getline(cin, exgirlfriend);

        cout << "The name  of exgirlfriend is " << exgirlfriend << endl;
    }
};
int main()
{
    yogesh gf1;
    gf1.display();
    return 0;
}