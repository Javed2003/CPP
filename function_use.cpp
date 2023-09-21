#include <iostream>
using namespace std;
void large(int, int, int);
int main()
{
    int x, y, z;
    cout << "enter the three number:" << endl;
    cin >> x >> y >> z;
    large(x, y, z);
}
void large(int x, int y, int z)
{
    if (x >= y && x >= z)
        cout << x << " is largest number";
    else if (y >= x && y >= z)
        cout << y << " is largest number";
    else
        cout << z << " is largest number";
}