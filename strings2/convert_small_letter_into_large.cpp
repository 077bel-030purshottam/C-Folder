#include <iostream>
#include <cstring >

using namespace std;

int main()
{
    char str[50] = "purshottam";

    for (int i = 0; i < strlen(str); i++)

    {
        str[i] = toupper(str[i]);
    }

    cout << "THe given string in uppercase is " << str << endl;
    return 0;
}
// ***********************************************************************

// string type string

// #include <iostream>
// #include <cstring >

// using namespace std;

// int main()
// {

//     string str = "purshottam";

//     for (int i = 0; i < str.size(); i++)
//     {
//         str[i] = toupper(str[i]);
//     }

//     cout << "THe given string in uppercase is " << str << endl;
//     return 0;
// }