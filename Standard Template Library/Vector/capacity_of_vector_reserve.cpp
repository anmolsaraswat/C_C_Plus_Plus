#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    for(int i=0; i<32; i++)
    {
        vec.push_back(i);
        vec.reserve(500);
        cout << "Size:" << vec.size() << "   Capacity:" << vec.capacity() << endl;
    }
    return 0;
}
