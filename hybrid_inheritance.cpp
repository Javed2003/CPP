// use of Hybrid inheritance in c++ programming
#include <iostream>
using namespace std;
// randomly make a program
class A // derrived class
{
public:
    int a, b;
    void getdata() // function it is get the input by the user in variable a and b

    {
        cout << "enter the value of a : ";
        cin >> a;
        cout << "enter the value of b : ";
        cin >> b;
    }
    void swap() // function which is swap the value of a and b
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "after swapping value of the a = " << a << " and value of b = " << b << endl;
    }
};
class B // derived class
{
public:
    int t;
    void deg_faren() // function for converting temperature celcius into fahrenheit
    {
        cout << "enter the temperature in degree : ";
        cin >> t;
        float f;
        f = 9 * t / 5 + 32;
        cout << t << "celcius = " << f << " Fahrenheit" << endl;
    }
};
class C : public A
{
public:
    int sum;
    void add() // add value of a and b after swapping
    {
        sum = a + b;
        cout << "addition of " << a << " and " << b << " = " << sum << endl;
    }
};
class D : public B, public C // inherit class
{
public:
    float F;
    void faren_deg() // temperature convert fahrenheit into celcius
    {
        cout << "enter the temperature in fahrenheit : ";
        cin >> F;
        int T = (F - 32) * 5 / 9;
        cout << F << " fahrenheit = " << T << " celcius " << endl;
    }
    void sub()
    {
        int min = a - b;
        cout << "subtraction of " << a << " and " << b << " = " << min << endl;
    }
};
int main() // main function by which we will call all the functions which are present in the class
{
    D d;
    // d.getdata();
    // d.swap();
    // d.add();
    // d.sub();
    d.deg_faren();
    d.faren_deg();
}