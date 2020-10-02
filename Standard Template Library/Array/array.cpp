// TOPIC: std::array

//Syntax: std::array<T,N> array;

//NOTICE:
//1. std::array is a container that encapsulates fixed size arrays.
//2. arraysize is needed at compile time.
//3. Assign by value is actually by value. If you pass array in a function that it is pass by value and not like c that is pass by reference.
//4. Access Elements:
//  a. at()
//  b. []
//  c. front()
//  d. back()
//  e. data() //gives access to the underlying array, it will return the pointer to the underlying array
//  f. fill() // it will fill all the elements with a particular value

#include <iostream>
#include <array>
using namespace std;

int main()
{
    //Declare
    std::array<int, 5> myarray;

    //Initialization
    std::array<int, 5> myarray1 = {1,2,3,4,5}; //initializer list
    std::array<int, 5> myarray2 {1,2,3,4,5}; //uniform initialization

    //Assign using initializer list
    std::array<int, 5> myarray3;
    myarray3 = {1,2,3,4,5};

    cout << myarray1.at(2) <<endl;
    return 0;
}



















