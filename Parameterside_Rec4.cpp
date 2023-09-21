#include <bits/stdc++.h>
using namespace std;
void add(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    add(i - 1, sum + i);
}

int main()
{
    int i, sum = 0;
    cin >> i;
    add(i, sum);
    return 0;
}