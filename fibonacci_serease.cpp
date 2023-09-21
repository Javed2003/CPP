#include <iostream>
using namespace std;
int main()
{
  int term1 = 0, term2 = 1, num, temp = 0, i;
  cout << "enter the number:";
  cin >> num;
  cout << "fibonacci serease:" << endl;
  cout << term1 << endl;
  cout << term2 << endl;
  temp = term1 + term2;

  while (temp <= num)
  {
    cout << temp << endl;

    term1 = term2;
    term2 = temp;
    temp = term1 + term2;
  }
}