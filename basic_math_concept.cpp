#include <bits/stdc++.h>
using namespace std;

class math
{
private:
    int number = 3456;

public:
    void digit_cnt() // count the number of digits
    {
        int count = 0;
        while (number > 0)
        {
            number = number / 10;
            count = count + 1;
        }
        cout << "Total number of count = " << count << endl;
    }

    void revers_num()
    {
        int revers = 0, rem;
        while (number > 0)
        {
            rem = number % 10;
            revers = (revers * 10) + rem;
            number = number / 10;
        }
        cout << "revers of given number : " << revers << endl;
    }

    void check_pali() // check whether the number palindrome or not
    {
        // examples of palinromes ,like n=371 = 3 to power 3 + 7 to power 3 + 1 to power 3 = 371 is palindrome
        // this power means 3 to power 3 means = (3*3*3)
        int num, rem, rem1 = 0;
        cout << "enter the number : ";
        cin >> num;
        // int n = num;
        while (num > 0)
        {
            rem = num % 10;
            rem1 = rem1 + (rem * rem * rem);
        }
        if (rem1 == num)
        {
            cout << "this is a palindrome";
        }
        else
        {
            cout << "this is not palindrome" << endl;
        }
    }
};
int main()
{
    math m1;
    // m1.digit_cnt();
    // m1.revers_num();
    m1.check_pali();
}
