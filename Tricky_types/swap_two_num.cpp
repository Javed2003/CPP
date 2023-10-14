#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers: " << endl;
    cout << "number1: ";
    cin >> a;
    cout << "number2: ";
    cin >> b;

    // swap two numbers without using third variable
    /* a = a + b;
     b = a - b;
     a = a - b;
     cout << "a= " << a << endl;
     cout << "b= " << b << endl;
     */

    // swap two numbers without addition and subtraction variable
    /*
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    */

    // swap two number using third variable
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}