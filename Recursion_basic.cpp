#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void Recursion() // function with the name Recursion.
{
    if (cnt == 5)
        return; // Base condition.
    cout << cnt << endl;
    cnt++;       // increment the value of count (cnt).
    Recursion(); // Call Function itself which is also called Recursion.
}

int main() // main function
{
    cout << "This is the basic example of Recursion!" << endl;
    Recursion(); // call the Recursion name function
    return 0;
}
