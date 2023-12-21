    #include <iostream>
    #include <cstring >

    #include <list>

    using namespace std;

    int main()
    {
        list<string> s1;
        list<string>::iterator iter;
        iter = s1.begin();
        cout << "Enter the name of the people " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> *iter;
            cin.ignore();
            s1.push_back(*iter);
        }

        return 0;
    }