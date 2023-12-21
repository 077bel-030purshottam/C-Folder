#include <iostream>
#include <csignal>

using namespace std;
void signalhandling(int signum)
{
    cout << "Interupted  signal(" << signum << ") " << endl;
    exit(signum);
}
int main()
{
    signal(SIGINT, signalhandling);
    while (1)
    {
        cout << "going to sleep " << endl;
        break;
    }
    return 0;
}