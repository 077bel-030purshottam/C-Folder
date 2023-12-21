#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
class student
{
      string name;
      int std_class;
      int std_rollnumber;
      int math;
      int physics;
      int opt_math;
      int social;
      int EPH;
      int English;
      int Nepali;
      int science;
      int computer;
      double total_marks;
      double percentage;

public:
      void setname();
      void stdclass();
      void roll_number();
      void getmarks();
      void display();
      void display_infile();
      void calculate_percentage();
};

void student::setname()
{
      cout << "Enter the name of the student " << endl;
      cin >> name;
}
void student::stdclass()
{
      cout << "Enter the class of the student " << endl;
      cin >> std_class;
}
void student::roll_number()
{
      cout << "Enter the roll number  of the student " << endl;
      cin >> std_rollnumber;
}
void student::getmarks()
{
      cout << "Enter the marks of the student in math" << endl;
      cin >> math;
      cout << "Enter the marks of the student in physics" << endl;
      cin >> physics;
      cout << "Enter the marks of the student in science" << endl;
      cin >> science;
      cout << "Enter the marks of the student in opt_math" << endl;
      cin >> opt_math;
      cout << "Enter the marks of the student in computer" << endl;
      cin >> computer;
      cout << "Enter the marks of the student in EPH" << endl;
      cin >> EPH;
      cout << "Enter the marks of the student in social" << endl;
      cin >> social;
      cout << "Enter the marks of the student in English" << endl;
      cin >> English;
      cout << "Enter the marks of the student in Nepali" << endl;
      cin >> Nepali;
}
void student ::display()
{

      cout << "THe name of the student is          :=>" << name << endl;
      cout << "THe class  of the student is        :=>" << std_class << endl;
      cout << "THe roll number  of the student is  :=>" << std_rollnumber << endl;
      cout << "The marks of the student are        :=>" << endl;
      cout << " The marks of the student are" << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "math    "
           << "|=>" << setw(13) << "|" << math << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "opt_math"
           << "|=>" << setw(13) << "|" << opt_math << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "science "
           << "|=>" << setw(13) << "|" << science << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "social  "
           << "|=>" << setw(13) << "|" << social << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "computer"
           << "|=>" << setw(13) << "|" << computer << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "English "
           << "|=>" << setw(13) << "|" << English << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "Nepali  "
           << "|=>" << setw(13) << "|" << Nepali << "| " << endl;
      cout << "                |The marks of the student in the subject|: " << setw(13) << "|"
           << "EPH     "
           << "|=>" << setw(13) << "|" << EPH << "| " << endl;
}
void student ::display_infile()
{

      student std1;
      ofstream file1;
      file1.open("studentfile.txt");
      file1 << "                " << setw(20) << " THe name of the school is " << endl
            << "         lord bright wisdom Internatinal school " << endl;
      file1 << "\n\n"
            << endl;
      file1 << "   The student detail is " << endl;
      file1 << "   THe name of the student is         :=>" << name << endl;
      file1 << "   THe class  of the student is       :=>" << std_class << endl;
      file1 << "   THe roll number  of the student is :=>" << std_rollnumber << endl;
      file1 << "\n\n"
            << endl;
      file1 << " The marks of the student are" << endl;
      file1 << "*****************************************************************************************************" << endl;
      file1 << "S.No:" << setw(75) << "subject" << setw(20) << "marks" << endl;
      file1 << 1 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "math    "
            << "|=>" << setw(13) << "|" << math << "| " << endl;
      file1 << 2 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "opt_math"
            << "|=>" << setw(13) << "|" << opt_math << "| " << endl;
      file1 << 3 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "science "
            << "|=>" << setw(13) << "|" << science << "| " << endl;
      file1 << 4 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "social  "
            << "|=>" << setw(13) << "|" << social << "| " << endl;
      file1 << 5 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "computer"
            << "|=>" << setw(13) << "|" << computer << "| " << endl;
      file1 << 6 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "English "
            << "|=>" << setw(13) << "|" << English << "| " << endl;
      file1 << 7 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "Nepali  "
            << "|=>" << setw(13) << "|" << Nepali << "| " << endl;
      file1 << 8 << "                |The marks of the student in the subject|: " << setw(13) << "|"
            << "EPH     "
            << "|=>" << setw(13) << "|" << EPH << "| " << endl;
      file1 << "********************************************************************************************************" << endl;
      file1 << "\n\n"
            << endl;

      total_marks = (math + social + science + Nepali + English + EPH + computer + opt_math);
      percentage = (total_marks / 800) * 100;
      file1 << "The total marks is := " << total_marks << endl;
      file1 << "The total marks is := " << percentage << endl;
      file1 << "\n\n"
            << endl;
      if (total_marks > 400)
      {
            file1 << " " << setw(75) << "result"
                  << " : "
                  << setw(2) << "pass" << endl;
      }
      else
      {
            file1 << " " << setw(75) << "result"
                  << " : "
                  << setw(2) << "fail" << endl;
      }
}

void student::calculate_percentage()
{
      total_marks = (math + social + science + Nepali + English + EPH + computer + opt_math);
      percentage = (total_marks / 800) * 100;
      cout << "The total marks      is :=>" << total_marks << endl;
      cout << "The total percentage is :=>" << percentage << endl;
}
int main()
{
      student s1;
      s1.setname();
      s1.stdclass();
      s1.roll_number();
      s1.getmarks();
      s1.display();
      s1.calculate_percentage();
      s1.display_infile();

      return 0;
}