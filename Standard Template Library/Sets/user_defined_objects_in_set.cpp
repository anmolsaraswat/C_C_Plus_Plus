#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class Person{
public:
    float age;
    string name;
bool operator < (const Person& rhs) const{return age<rhs.age;}
};

using namespace std;
int main()
{
    set<Person> Set = {{30, "Rupesh"},{25, "Hitesh"},{22, "John"}};
    for(const auto& e: Set)
    {
        cout << e.age << " " << e.name <<endl;
    }
    return 0;
}
