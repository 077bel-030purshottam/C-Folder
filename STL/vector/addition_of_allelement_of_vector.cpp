#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    int element;
    int size;
    cout << "Enter the size of the vector element " << endl;
    cin >> size;
    // taking vector element as input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the vector element: " << i + 1 << " = ";
        cin >> element;
        vec1.push_back(element);
    }
    // displaying the vector element
    cout << "Element are " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    int sum = 0;
    cout << "\n The sum of vector Element is " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        sum += vec1[i];
    }
    cout << sum << endl;
    return 0;
}