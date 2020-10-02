#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1,2,3,4};
    vector<int> vector2 = {1,2,3,4,5};
    vector1.swap(vector2);
    cout << "Vector1 = ";
    for (auto it = vector1.begin(); it<vector1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Vector2 = ";
    for (auto it = vector2.begin(); it<vector2.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
