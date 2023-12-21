// C++ Program to Find All Roots of a Quadratic Equation
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, discriminant, real_part, imaginary_part, x1, x2;
    cout << "Enter the value of the a ,b ,c" << endl;
    cin >> a >> b >> c;
    discriminant = (b * b) - (4 * a * c);
    cout << "discriminanat = " << discriminant << endl;

    if (discriminant > 0)
    {
        cout << "Roots are real and different " << endl;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "x1 =" << x1 << endl;
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x2 =" << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "The roots are equal and real" << endl;
        x1 = (-b + sqrt(discriminant)) / 2 * a;
        cout << "x1 = x2  =" << x1 << endl;
    }
    else if (discriminant < 0)
    {
        cout << "The roots are complex and different " << endl;
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        cout << "The real  part = " << real_part << endl;
        cout << "The  imaginary_part = " << imaginary_part << endl;
    }

    return 0;
}