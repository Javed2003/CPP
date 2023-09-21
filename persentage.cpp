#include <iostream>
using namespace std;
int main()
{
  int n1, n2, n3, n4, n5, sum;
  cout << "enter the  five student number:" << endl;
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  sum = n1 + n2 + n3 + n4 + n5;
  int per = sum / 5;

  if (per >= 90)
  {
    cout << " grade A+";
  }
  else if (per >= 80)
  {
    cout << "grade A";
  }
  else if (per >= 70)
  {
    cout << "grade B";
  }
  else if (per >= 60)
  {
    cout << "grade C";
  }
  else if (per >= 50)
  {
    cout << "pas";
  }

  else
  {
    cout << "fail";
  }
}