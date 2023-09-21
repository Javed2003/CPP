// addition of two numbers by using single inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void get()
    {
        cout << "Enter the two values : " << endl;
        cin >> a >> b;
    }
};
class B : public A
{
public:
    int c;
    void add()
    {
        c = a + b;
        cout << "sum of " << a << " and " << b << " = " << c << endl;
    }
};
int main()
{
    B b1;
    b1.get();
    b1.add();
}