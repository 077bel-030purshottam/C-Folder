#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    int element;
    // taking input from the user
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the element of the vector " << endl;
        cin >> element;
        vec1.push_back(element);
    }

    // displaying the input
    cout << "The vector element are " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    // declaring another vector
    vector<int> vec2;
    int element2;
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter the element of the vector " << endl;
        cin >> element2;
        vec2.push_back(element2);
    }

    // displaying another vec2
    cout << "The vector element are " << endl;
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    // declaring another vector
    vector<int> vec3;
    int element3 = element + element2;
    for (int i = 0; i < 2; i++)
    {
        vec3.push_back(element3);
        vec3[i] = vec1[i] + vec2[i];
    }
    // displaying the added vector
    cout << "\nThe addition of two vector are " << endl;
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }

    return 0;
}