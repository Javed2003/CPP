// in this program we will learn about function prototype
#include <iostream>
using namespace std;

int add(int, int); // function prototype
int sub(int, int); // function prototype

int main() // main function by which called the all others functions
{
    int a, b;
    cout << "enter the any two values : " << endl; // get the any two values by the user
    cin >> a >> b;                                 // after gettig values stor in the variable a and b
    cout << "summation = " << add(a, b) << endl;   // call the add funtion and print it
    cout << "subtraction = " << sub(a, b) << endl; // call the sub funtion and print it
    return 0;
}

int add(int x, int y) // function defintion
{
    int res;
    res = x + y;
    return res;
}

int sub(int x, int y) // funtion defintion
{
    int res;
    res = x - y;
    return res;
}