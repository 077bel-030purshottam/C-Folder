

#include <iostream>
#include <vector >

using namespace std;
void display(vector<int> &v)
{
    cout << "The element are " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int element;
    int size;
    cout << "Enter the size of the vector " << endl;
    cin >> size;
    vector<int> vec1;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the vector element " << endl;
        cin >> element;
        vec1.push_back(element);
    }
    // methods for displayint the vector element
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << " " << vec1[i];
    // }
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 2, 5, 5);
    display(vec1);
    return 0;
}