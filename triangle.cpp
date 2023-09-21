#include <iostream>
using namespace std;

int main()
{
    int a[10], i, j, temp;

    // cout << " up to doun triangle : " << endl;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // cout << "doun to up triangle : " << endl;
    for (i = 4; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    return 0;
}