#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

int main()
{
    set <int> s1;
    s1.insert(10);
    s1.insert(60);
    s1.insert(22);
    s1.insert(40);
    s1.erase(22);
    set <int> :: iterator itr;
    for(itr = s1.begin(); itr!=s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}
