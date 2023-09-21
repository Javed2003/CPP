// Demonstrate the function overloading.
#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double a, double b, double c)
{
    cout << "sum = " << (a + b + c) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum = " << (a + b + c) << endl;
}
int main()
{
    add(11, 12);
    add(7.2, 3.6, 11.3);
    add(7, 6, 8);
    return 0;
}