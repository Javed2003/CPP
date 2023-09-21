#include <iostream>
using namespace std;
void swap(int, int);
int main()
{
    int a, b;
    cout << "enter the two no." << endl;
    cin >> a >> b;
    swap(a, b);
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << y;
}