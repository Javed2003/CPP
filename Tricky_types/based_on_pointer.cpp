#include <iostream>
using namespace std;

int main()
{
    int num = 1000;
    int *pont;
    pont = &num;
    cout << "value of *pont: " << *pont << endl;
    cout << "value of num: " << num << endl;
    cout << "value of pont: " << pont << endl;
    pont = pont + 5;
    cout << "value of pont after adding 5: " << pont << endl;
    cout << "value of *pont after adding 5: " << *pont << endl;
    num = num + 5;
    cout << "value of num after adding 5: " << num << endl;

    return 0;
}