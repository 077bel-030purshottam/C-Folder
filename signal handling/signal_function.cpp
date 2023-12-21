#include <iostream>
#include <csignal>

using namespace std;
void signalHandler(int signum)
{
    cout << "Interrupt signal(" << (signum) << ") received .\n ";

    // cleanup and close up stuff here
    // terminate program

    exit(signum);
}
int main()
{
    // register signal signit and signal handler
    signal(SIGINT, signalHandler);
    while (1)
    {
        cout << "going to sleep..... " << endl;
        _sleep(1);
    }
    return 0;
}