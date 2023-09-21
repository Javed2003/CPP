#include <iostream>
using namespace std;

// void swap(int a,int b);
//  void Noswap(int a1, int b1);
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
      

}

void Noswap(int a1, int b1)
{
    cout << "again print thr value of x and y : " << a1 << " and " << b1 << endl;

}

int main()
{
    int x, y,temp;
    cout << "enter the first number : ";
    cin >> x;
    cout << "enter the second number :";
    cin >> y;
    cout << "befor swaping value of x and y are : " << x << " and " << y << endl;
    
    swap(x, y);
    cout << "after swaping value of x and y are : " << x << " and " << y << endl;
  
    temp=x;
    x=y;
    y=temp;
    cout << "after swaping value of x and y are1 : " << x << " and " << y << endl;

  
    
    return 0;
}
