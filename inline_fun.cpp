// use of inline function ic c++ programing
#include <iostream>
using namespace std;

inline int add(int x, int y) // inline function declared with keyword(inline) in which addition of two numbers are  perfomed
{
    return (x + y); // body of inline function
}

inline int mul(int p, int q) // second inline function which is performed multiplication of two numbers
{
    return (p * q); // body of the  fuction
}

int main()
{ // main funtion by which call the other declared functions in  program
    int a, b;
    cout << "enter the vaue of a and b : " << endl;                                    // get the value from the user
    cin >> a >> b;                                                                     // after getting values stored in variables a and b
    cout << "sum of " << a << " and " << b << " is: " << add(a, b) << endl;            // call the add function and print it
    cout << "multiplication of " << a << " and " << b << " is: " << mul(a, b) << endl; // call the mul funtion and print it

    return 0;
}