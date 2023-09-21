#include<iostream>
using namespace std;
int main()
{
    int num,i;
    int sum=0;
    while (num<9)
    {   //take input from the user
        cout<<"enter the number:";
        cin>>num;
        if(num<=0)
        {
            break;
        }
        sum+=num;

    }
    cout<<"sum="<<sum;
    
    
    
}