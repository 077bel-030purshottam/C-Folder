#include <iostream>

using namespace std;
class student
{
    int roll_num;

public:
    void getroll()
    {
        cout << "Enter the roll number of the stuident " << endl;
        cin >> roll_num;
    }
    void printroll()
    {
        cout << "The roll_number of the student is  " << roll_num << endl;
    }
};

class test_score
{
protected:
    int score1;
    int score2;

public:
    void getscore()
    {
        cout << "Enter the score of the student in the 2 subjects" << endl;
        cin >> score1 >> score2;
    }
    void printscore()
    {
        cout << "The score is " << score1 << endl;
        cout << "The score is " << score2 << endl;
    }
};

class result : public student, public test_score
{
    int total_marks;

public:
    void getdata()
    {
        total_marks = score1 + score2;
    }
    void printmarks()
    {
        cout << "The total marks is " << total_marks << endl;
    }
};
int main()
{
    result re;
    re.getroll();
    re.getscore();
    re.getdata();
    cout << "The detail of the student is " << endl;
    re.printroll();
    re.printscore();
    re.printmarks();
    return 0;
}