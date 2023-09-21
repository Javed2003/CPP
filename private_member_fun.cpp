#include<iostream>
using namespace std;

class product
{
    private:
        int r;
        int pr_pro();
    public:
        int display();
};

int product:: pr_pro()
{
    cout<<"enyter the price of product : ";
    cin>>r;
}

int product::display()
{
     
    cout<<"price of product is : ";
   
}

int main()
{
    product p;
    p.display();

    return 0;
}