#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3, m4, m5;
    int per;

    cout << "enter the five subject marks:" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    int sum;
    sum = m1 + m2 + m3 + m4 + m5;
    per = sum / 5;
    cout << "percentage=" << per << endl;
    if (per >= 65)
        cout << "first division";
    if ((per >= 50) && (per < 65))
        cout << "second division";
    if ((per >= 40) && (per < 50))
        cout << "third division";
    if (per < 40)
        cout << "fail";
}