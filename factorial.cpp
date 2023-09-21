#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1, i;
    cout << "enter the number:";
    cin >> num;
    // show error when user type the negative number
    if (num < 0)
    {
        cout << "negative number dose not exist";
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }
        cout << "factorial=" << fact << endl;
    }
}