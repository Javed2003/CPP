#include <iostream>
using namespace std;
class rectangle
{
private:
  int len, br;

public:
  int num1, num2;
  void getdata()
  {
    cout << " length and breadth is: " << endl << len << endl << br << endl;
    cout << " two number is: " << endl
         << num1 << endl
         << num2 << endl;
  }

  void setdata(int l, int b);

  void area_peri()
  {
    int a, p;
    a = len * br;
    p = 2 * (len + br);
    cout << "area=" << a << endl
         << "perimeter=" << p << endl;
  }
  void add()
  {
    int sum = num1 + num2;
    cout << "sum of two numbe is: " << sum << endl;
  }
};
void rectangle::setdata(int l, int b)
{
  len = l;
  br = b;
}

int main()
{
  rectangle javed;
  javed.setdata(4, 3);
  javed.num1 = 3;
  javed.num2 = 5;
  javed.getdata();
  javed.area_peri();
  javed.add();
}
