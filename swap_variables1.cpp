// swap the content of two variables using call by reference
#include <iostream>
using namespace std;
void swap(int &a, int &b)//function declairation
{
    int temp = a;
    a = b;
    b = temp;
}
int main()              //main function
{
    int x, y;
    cout << "enter the two values : " << endl;
    cin >> x >> y;
    cout << "befor swaping values are " << x << " and " << y<<endl;
    swap(x, y);     //calling swap fuction
    cout << "after swaping values are " << x << " and " << y<<endl;

}
