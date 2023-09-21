// This Program is made for understanding the Multiple Recursion calls to print Fibonicci Number
#include <bits/stdc++.h>
using namespace std;
int f(int n) // This is function which is print the fibonicci number of any number
{
    if (n <= 1)
        return n;
    int last = f(n - 1); // here both function calls its also called multiple recursion calls
    int slast = f(n - 2);
    return last + slast; // retuen the sum of last and slast
}

int main() // it is the main function which is called Driver
{
    int n;
    cin >> n;
    cout << "fibonicci number of " << n << " is " << f(n) << endl; // print the fibbonicci number of any number
    return 0;
}