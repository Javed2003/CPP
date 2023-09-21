//add two values using multiple inheritance
#include<iostream>
using namespace std;
class A
{
    public:
        int a;
    void getA()
    {
        cout<<"enter the value of a : ";
        cin>>a;
    }
};
class B
{
    public:
        int b;
    void getB()
    {
        cout<<"enter the value of b : ";
        cin>>b;
    }
};
class C:public A,public B
{
    public:
        int c;
    void add()
    {
        c=a+b;
        cout<<"sum of "<<a<<" and "<<b<<" = "<<c<<endl;
    }
};
int main()
{
    C c1;
    c1.getA();
    c1.getB();
    c1.add();
}