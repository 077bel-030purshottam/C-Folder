// C++ Program to Check Whether a character is Vowel or Consonant
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int islowercasevowel, isUppercasevowel;
    char c;
    cout << "Enter any letter " << endl;
    cin >> c;
    islowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (islowercasevowel || isUppercasevowel)
    {
        cout << c << " is a vowel letter " << endl;
    }
    else
    {
        cout << c << " is a consonant  letter " << endl;
    }
    return 0;
}