#include <bits/stdc++.h>
using namespace std;

// Q.  print the your name n times by the help of recursion method.

void beta(int j, int k)
{
    if (j > k)
        return;
    cout << "Javed" << endl;
    j++;
    beta(j, k);
}

int main()
{

    int N, i = 1;
    cout << "Enter the the your choice to print the name times:";
    cin >> N;
    cout << endl;
    beta(i, N);
    return 0;
}