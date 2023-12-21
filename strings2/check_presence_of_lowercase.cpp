#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[50] = "PurshoTTAM";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == tolower(str[i]))
        {
            cout << "There is presence of lowercase in position " << i + 1 << endl;
            str[i] = tolower(str[i]);
        }
        else if (str[i] == toupper(str[i]))
        {
            cout << "There is presence  of upper  in  position  " << i + 1 << endl;
            str[i] = toupper(str[i]);
        }
    }
    
    return 0;
}