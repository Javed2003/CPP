#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void setdata(){a=22;b=12;}
    friend void putdata(complex);

};

void putdata(complex c1)
{
    cout<<"sumation of and is "<<c1.a+c1.b<<endl;
}

int main()
{
    complex c;
    c.setdata();
    putdata(c);
    

}