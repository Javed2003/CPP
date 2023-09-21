#include <iostream>
using namespace std;
int main()
{
    int num1, num2, hcf, i, j;
    cout << "enter the two numbers:";
    cin >> num1 >> num2;
    if (num1 == 0 || num2 == 0)
    {
        cout << "0";
    }
    else
    {
        for (i = 1; i < num1 || i < num2; ++i)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                j = i;
            }
        }
        cout << "hcf=" << j;
    }
}