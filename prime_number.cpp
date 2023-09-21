#include <iostream>
using namespace std;
void prime_num(int, int);
int num1, num2, i1, i2, prime;
int main()
{
    cout << "enter the two interval numbers:" << endl;
    cin >> num1 >> num2;
    cout << "Prime numbers are:" << endl;
    prime_num(num1, num2);
}

void prime_num(int n1, int n2)
{
    for (i1 = n1; i1 <= n2; i1++)
    {
        int count = 0;
        for (i2 = 2; i2 <= i1 / 2; i2++)
        {
            if (i1 % i2 == 0)
                count++;
        }
        if (count == 0)
            cout << i1 << " ";
    }
}