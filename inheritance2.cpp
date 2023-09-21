// add two numbers using multilevel inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void get()              //input two values from user
    {
        cout << "Enter the two values a and b : " << endl;
        cin >> a >> b;
    }
};
class B : public A
{
public:
    int c;
    void add()              //function to add two numbers
    {
        c = a + b;
    }
};
class C : public B
{
public:
    void show()             //function to show sum of two numbers
    {
        cout << "sum of " << a << " and " << b << " = " << c << endl;
    }
};
int main()      //main function by which we called all functions
{
    C c1;
    c1.get();
    c1.add();
    c1.show();
}