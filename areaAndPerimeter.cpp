#include <iostream>
using namespace std;
void square(int n)
{
    int value;
    value=n*n;
    cout<<"i="<<n<<"square="<<value<<endl;
}
int main()
{
    void square(int);
    int max;
    cout<<"enter the limit: \n";
    cin>>max;
    for(int i=1;i<=max;i++)
    square(i);
}