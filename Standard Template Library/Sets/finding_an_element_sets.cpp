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
    if(s1.find(22)!= s1.end())
    {
        cout << "Value 22 is present.";
    }
    else{
        cout <<  "Value 22 is not present.";
    }
    return 0;
}
