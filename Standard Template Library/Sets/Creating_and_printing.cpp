#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;
int main()
{
    set<int> Set = {1, 2, 3, 4, 5, 3, 2, 4};
    for(const auto& e: Set)
    {
        cout << e <<endl;
    }
    return 0;
}
