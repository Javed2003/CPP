#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[50], i, m, n, pos, c = 0;
    cout << "enter the number of elements:";
    cin >> n;
    cout << "enter the elements in array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "show the all ellements of array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i];
        cout << "\t";
    }
    cout << "enter the number which you want to search : ";
    cin >> m;
    for (i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            c++;
            pos = i;
            break;
        }
    }
    if (c != 0)
        cout << "\n no.found at " << pos + 1 << " position";
    else
        cout << "\n no. not found";
}