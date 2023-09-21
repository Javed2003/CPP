#include<iostream>
using namespace std;
class sample
{
   
    public:
     int a,b;
    void setdata(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;

        a=*x;
        b=*y;

    }
    void display()
    {
        cout<<"after swaping : "<<"a="<<a<<"b="<<b<<endl;
    }

};
int main()
{
    sample s;
    int a,b;
    a=12;
    b=48;
    s.setdata(&a,&b);
    s.display();
}