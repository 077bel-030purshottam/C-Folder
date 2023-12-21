#include <iostream>

using namespace std;

int main()
{

    int m, n;

    cout << "Enter the size of the first array " << endl;
    cin >> m >> n;
    int a[m][n];

    int p, q;
    cout << "Enter the size of the second array " << endl;
    cin >> p >> q;
    int b[p][q];

    if (m == p && n == q)
    {
        cout << " Enter the " << m * n << " elemet of the first array " << endl;

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << " Enter the " << p * q << " elemet of the second array " << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> b[i][j];
            }
        }

        cout << "The two dimaensional array element of first array is given below\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " " << a[i][j];
                if (j % 2 != 0)
                {
                    cout << "\n";
                }
            }
        }

        cout << "The two dimaensional array element of second array  is given below\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " " << b[i][j];
                if (j % 2 != 0)
                {
                    cout << "\n";
                }
            }
        }

        // displaying the sum of both array element
        cout << "The addituion of both matrix is \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " " << (a[i][j] + b[i][j]);
                if (j % 2 != 0)
                {
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}