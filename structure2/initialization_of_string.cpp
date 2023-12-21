#include <iostream>
#include <cstring>

using namespace std;
struct books
{
    char tittle[50];
    char author[50];
    char subject[50];
    long int book_id;
};
int main()
{
    struct books b1, b2;

    // b1 specification
    strcpy(b1.tittle, "Learn c++ programming language ");
    strcpy(b1.author, "Purshottam Thakur ");
    strcpy(b1.subject, " c++ programming language ");
    b1.book_id = 50230;

    // b2 specification
    strcpy(b2.tittle, "Learn c programming language ");
    strcpy(b2.author, "Rohit  Thakur ");
    strcpy(b2.subject, " c programming language ");
    b2.book_id = 230546;

    // dislaying the b1
    cout << "The b1 tittle is " << b1.tittle << endl;
    cout << "The b1 author   is " << b1.author << endl;
    cout << "The b1 subject  is " << b1.subject << endl;
    cout << "The b1 book id  is " << b1.book_id << endl;
    cout << endl;

    // dislaying the b2
    cout << "The b2 tittle is " << b2.tittle << endl;
    cout << "The b2 author   is " << b2.author << endl;
    cout << "The b2 subject  is " << b2.subject << endl;
    cout << "The b2 book id  is " << b2.book_id << endl;

    return 0;
}