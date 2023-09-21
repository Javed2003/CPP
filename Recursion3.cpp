#include <bits/stdc++.h>
using namespace std;

void f3(int i, int n)
{
    if (i > n)
        return;
    f3(i, n-1);
    cout << n << endl;
    
}

int main()
{
    int n;
    cout<<"How numbers of time you want to print:";
    cin >> n;
    cout<<endl;
    f3(1,n);
    return 0;
}