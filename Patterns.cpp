#include <iostream>
using namespace std;
int n;

void pattern_1()
{
    int a[5], i, j;                            //    1       this pattern  creeated by this code
    for (i = 1; i <= 5; i++)                   //    1 2
    {                                        //      1 2 3
        for (j = 1; j <= i; j++)            //       1 2 3 4
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern_2()
{                                                  // 1 2 3 4     this pattern show by this code
    int a[5], i, j;                                // 1 2 3 
    for (i = 5; i > 0; i--)                        // 1 2
    {                                              // 1
        for (j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern_3()
{                                               //   4 3 2 1        this pattern creat by this code
    int a[4], i, j;                             //   3 2 1
    for (i = 4; i > 0; i--)                     //   2 1
    {                                           //   1
        for (j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern_4()
{                                       //  *           this pattern show by this code
    int a[5], i, j;                     //  * *
    for (i = 1; i <= 5; i++)            //  * * *
    {                                   //  * * * *
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern_5()
{
    int a[5], i, j;                    // * * * *
    for (i = 5; i > 0; i--)            // * * *
    {                                  // * *
        for (j = 1; j < i; j++)        // *
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_6()
{
    int n = 5, i, j, space = (n - i - 1), star = (2 * i + 1);
    for (i = 0; i < n; i++)
    {
        // space
        for (j = 0; j < n - i - 1; j++)              //       *
        {                                             //     * *
            cout << " ";                             //     * * * 
        }                                          //     * * * * *
        // star                                  //     * * * * * * * 
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern_7()
{
    int n = 5, i, j, star = (i + 1), space = (n - i - 1);
    // space
    for (i = 0; i < n; i++)                                     //          *
    {                                                           //         **
        for (j = 0; j < n - i - 1; j++)                         //        ***
        {                                                       //       ****
            cout << " ";                                        //      *****
        }
        // star
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern_8()
{
   int i,j,n=5,space=i,star=(2*n-2*i-1);
   for(i=0;i<n;i++)
   {
    //space
    for(j=0;j<i;j++)            //opposites of pattern number six (6)
    {
        cout<<" ";
    }
    //star
    for(j=0;j<2*n-2*i-1;j++)
    {
        cout<<"*";
    }
    //space
    for(j=0;j<i;j++)
    {
        cout<<" ";
    }
    cout<<endl;
    
   }
}
void pattern_9()
{
    int i,j,n=7,space=i,star=(n-i);                        //just opposites of pattern number seven (7)
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
void pattern_10()
{
    int i,j,n=5,start=1;
    for(i=0;i<n;i++)
    {
        if (i%2==0) start=1;
        else start=0;
        for(j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
 void pattern_11()
 {
    int i,j,n=5,start='*';
    for(i=0;i<n;i++)
    {
        if(i%2==0) start='*';
        else start='$';
        for(j=0;j<n;j++)
        {
            cout<<start;
          
        }
        cout<<endl;
    }
 }
 void pattern_12()
 {
    int i,j,n=5,space=(2*n-2*(i-1)),number;
    for(i=1;i<n;i++)
    {
        //number
        for(j=1;j<i+1;j++)
        {
            cout<<j;
        }
        //space
        for(j=1;j<2*n-2*(i-1);j++)
        {
            cout<<" ";
        }
        //number
        for(j=1;j<i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
 }
 void pattern_13()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
 }
 void pattern_14()
 {
    cout<<"enter the number of n : ";
    cin>>n;
   for(int i=0;i<n;i++)
   {
    for(char ch='A';ch<='A'+(n-i-1);ch++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
   }
 }
 void pattern_15()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //charartters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
         //space
         {
            cout<<ch<<" ";
            if(j<=breakpoint)
            ch++;
            else ch--;
         }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

 }
 void pattern_16()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch='A' ;
        for(int j=0;j<n-i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
 }
 void pattern_17()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch='A'+i ;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
 }
 void pattern_18()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        char ch='E'-i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
 }
 void pattern_19()
 {
    cout<<"enter the value of n : ";
    cin>>n;
    // for(int i=0;i<=n;i++)
    // {
    //     //star
    //     for(int j=0;j<n-i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     //space
    //       for(int j=0;j<2*i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     //star
    //       for(int j=0;j<n-i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;  
    // }
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        int space=n-2;
        for(int j=0;j<space;j++)
        {
            cout<<" ";
            space--;
        }
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
int main()
{
    //    pattern_1();
    //    pattern_2();
    //    pattern_3();
    //    pattern_4();
    // pattern_5();
    // pattern_6();
    // pattern_7();
    // pattern_8();
    // pattern_9();
    // pattern_10();
    // pattern_11();
    // pattern_12();
    // pattern_13();
    // pattern_14();
    // pattern_15();
    // pattern_16();
    // pattern_17();
    // pattern_18();
    pattern_19();



    return 0;
}